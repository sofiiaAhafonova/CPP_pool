/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:03:00 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:19:00 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
    std::string *panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;

    delete panthere;
}
