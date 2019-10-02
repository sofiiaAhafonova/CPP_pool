/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:50:56 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 11:24:44 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <cerrno>
#include <cstring>

void standart_input(std::istream &input)
{
    std::cout << input.rdbuf();
}

int main(int argc, char **argv)
{
    if (argc == 1 || (argc == 2 && std::string(argv[1]).compare("--") == 0))
    {
        standart_input(std::cin);
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string argument = argv[i];
        if (argument.find("--") == 0 && argument.length() > 2){
            std::cerr << "cat: unrecognized option '" << argument
                      << "'\nTry 'cat --help' for more information." << std::endl;
            return (0);
        }
    }
    for (int i = 1; i < argc; i++)
    {
        std::string argument = argv[i];
        if (i == 1 && argument.compare("--") == 0)
            continue;
        if (argument.compare("-") == 0)
        {
            standart_input(std::cin);
        }
        else
        {
            std::ifstream fs(argument);
            if (fs.good())
                standart_input(fs);
            else
                std::cerr << argv[0] << ": " << argument << ": " << strerror(errno) << std::endl;
        }
    }
    return (0);
}
