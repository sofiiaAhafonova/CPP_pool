/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 09:41:00 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/01 11:06:33 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook ::Phonebook()
{
    this->_index = -1;
}

Phonebook ::~Phonebook()
{
}

void Phonebook::search_command()
{

    std::string from_user;
    std::stringstream ss;
    int index = 0;

    if (this->_index < 0)
        std::cout << "Phonebook is empty!" << std::endl;
    else
    {
        if (this->_index >= MAX_CONTACT)
            this->_index = MAX_CONTACT - 1;
        for (int i = 0; i <= this->_index; i++)
        {
            if (i == 0)
            {
                std::cout << "|     index|first name| last name|  nickname|" << std::endl;
            }
            std::cout << "|"
                      << "         " << i << "|";
            this->phonebook[i].print_short_info();
        }
        std::cout << "Choose index!" << std::endl;
        std::getline(std::cin, from_user);
        ss << from_user;
        ss >> index;
        if ((index > 0 && index <= this->_index) || (!index && from_user == "0"))
            this->phonebook[index].print_full_info();
        else
            std::cout << "Index is incorrect!" << std::endl;
    }
}

void Phonebook::add_contact()
{

    this->_index++;
    if (this->_index >= MAX_CONTACT)
        std::cout << "Sorry you have too many contacts, you cannot add more." << std::endl;
    else
    {
        this->phonebook[this->_index].add_info();
        std::cout << "Contact successfully added!" << std::endl;
    }
    return;
}