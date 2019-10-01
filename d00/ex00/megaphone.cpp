/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 09:09:40 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/01 09:35:16 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char capitalize(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    return ch;
}

void megaphone(char *str)
{

    char ch;

    while (*str)
    {
        ch = capitalize(*str);
        std::cout << ch;
        str++;
    }
}

int main(int ac, char **av)
{

    if (ac > 1)
    {
        for (int i = 1; av[i]; i++)
        {
            megaphone(av[i]);
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
    return (0);
}