/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 09:47:24 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/01 11:00:52 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void info()
{

    std::cout << "Welcome to your phonebook!" << std::endl;
    std::cout << "Available commands:" << std::endl;
    std::cout << "ADD - add new contact" << std::endl;
    std::cout << "SEARCH - search contact" << std::endl;
    std::cout << "EXIT - quit phonebook" << std::endl;
}

int main()
{
    Phonebook phonebook = Phonebook();
    std::string command;
 
    info();
    while (1)
    {
        std::cout << "(ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "SEARCH")
            phonebook.search_command();
        else if (command == "EXIT")
            break;
    }
    return (0);
}
