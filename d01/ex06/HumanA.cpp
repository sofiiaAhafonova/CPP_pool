/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:07:43 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:07:46 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), _weapon(w) {}
HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType()
              << std::endl;
}
