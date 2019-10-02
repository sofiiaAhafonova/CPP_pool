/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:09:06 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:52:25 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Congratulations, zombie was born!!" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "RIP :0" << std::endl;
    return;
}


void Zombie::setZombieName(std::string name)
{
    this->_zombieName = name;
}

void Zombie::setZombieType(std::string type)
{
    this->_zombieType = type;
}

void Zombie::announce()
{
    std::cout << "<" << this->_zombieName << " (" << this->_zombieType << ")> Braiiiiiiinnnssss..." << std::endl;
}
