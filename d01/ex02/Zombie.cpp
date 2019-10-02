/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:09:06 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:20:50 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _zombieName(name), _zombieType(type)
{
    std::cout << "Congratulations, zombie " << name << " was born!!" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "RIP :0" << std::endl;
    return;
}

void Zombie::announce()
{
    std::cout << "<" << this->_zombieName << " (" << this->_zombieType << ")> Braiiiiiiinnnssss..." << std::endl;
}
