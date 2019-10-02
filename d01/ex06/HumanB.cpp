/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:09:32 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:09:36 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &w)
{
    this->_weapon = &w;
}

void HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType()
              << std::endl;
}
