/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:12:49 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:24:42 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int check_file(const char *path)
{
    struct stat s;

    if (stat(path, &s) == 0)
    {
        if (s.st_mode & S_IFDIR)
        {
            std::cout << path << ": Is a directory" << std::endl;
            return (0);
        }
        else if (!(s.st_mode & S_IROTH) & !(s.st_mode & S_IRGRP) & !(s.st_mode & S_IRUSR))
        {
            std::cout << path << ": Permission denied" << std::endl;
            return (0);
        }
        else if (s.st_mode & S_IFREG)
            return (1);
    }
    std::cout << path << ": No such file or directory" << std::endl;
    return (0);
}

void replaceStr(std::string &str, std::string toReplace, std::string replaceWith)
{
    size_t pos = 0;
    size_t N;

    while (1)
    {
        N = str.find(toReplace, pos);
        if (N == std::string::npos)
            break;
        str.replace(N, toReplace.length(), replaceWith);
        pos = N + replaceWith.length();
    }
    return;
}

void replaceFile(char *file, char *s1, char *s2)
{

    std::string newFileName;
    std::string toReplace = s1;
    std::string replaceWith = s2;

    if (!check_file(file))
        return;
    if (toReplace.empty())
    {
        std::cout << "Error: s1 must be non-empty" << std::endl;
        return ;
    }
    std::ifstream ifs(file);
    std::stringstream buffer;
    buffer << ifs.rdbuf();

    std::string bufferStr = buffer.str();
    replaceStr(bufferStr, toReplace, s2);

    newFileName = file;
    newFileName += ".replace";
    std::ofstream ofs(newFileName);
    if (!check_file(newFileName.c_str()))
        return;

    // push result to new file
    ofs << bufferStr;
    ifs.close();
    ofs.close();
}

int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout << "Usage: ./replace \"filename\" \"text to replace\" \"new text\"" << std::endl;
        return (0);
    }
    replaceFile(av[1], av[2], av[3]);
    return (0);
}
