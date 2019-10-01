/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 09:40:56 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/01 10:55:14 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACT 8

class Phonebook
{
private:
    int _index;
    Contact phonebook[MAX_CONTACT];

public:
    Phonebook();
    ~Phonebook();
    void search_command();
    void add_contact();
};

#endif
