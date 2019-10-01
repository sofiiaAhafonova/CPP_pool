/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 10:30:02 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/01 11:08:07 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
 
}

Contact::~Contact()
{
    return;
}

void Contact::add_info()
{
    std::cout << "first name: ";
    std::getline(std::cin, this->_first_name);

    std::cout << "last name: ";
    std::getline(std::cin, this->_last_name);

    std::cout << "nickname: ";
    std::getline(std::cin, this->_nickname);

    std::cout << "login: ";
    std::getline(std::cin, this->_login);

    std::cout << "postal address: ";
    std::getline(std::cin, this->_postal_address);

    std::cout << "email address: ";
    std::getline(std::cin, this->_email_address);

    std::cout << "phone number: ";
    std::getline(std::cin, this->_postal_address);

    std::cout << "birthday date: ";
    std::getline(std::cin, this->_birthday_date);

    std::cout << "favorite meal: ";
    std::getline(std::cin, this->_favorite_meal);

    std::cout << "underwear color: ";
    std::getline(std::cin, this->_underwear_color);

    std::cout << "darkest secret: ";
    std::getline(std::cin, this->_darkest_secret);
}

void Contact::print_narrow_column(std::string str)
{

    if (str.length() <= 10)
        std::cout << std::setw(10) << str << "|";
    else
        std::cout << str.substr(0, 9) << ".|";
}

void Contact::print_short_info()
{
    print_narrow_column(this->_first_name);
    print_narrow_column(this->_last_name);
    print_narrow_column(this->_nickname);
    std::cout << std::endl;
}

void Contact::print_full_info()
{

    std::cout << "first name: " << this->_first_name << std::endl;
    std::cout << "last name: " << this->_last_name << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
    std::cout << "login: " << this->_login << std::endl;
    std::cout << "postal_address: " << this->_postal_address << std::endl;
    std::cout << "email address: " << this->_email_address << std::endl;
    std::cout << "phone number: " << this->_phone_number << std::endl;
    std::cout << "birthday date: " << this->_birthday_date << std::endl;
    std::cout << "favorite meal: " << this->_favorite_meal << std::endl;
    std::cout << "underwear color: " << this->_underwear_color << std::endl;
    std::cout << "darkest secret: " << this->_darkest_secret << std::endl;
}
