/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:09:12 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:31:05 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    return;
}

ZombieEvent::~ZombieEvent()
{
    return;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->_zombieType = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, this->_zombieType);
}

void ZombieEvent::randomChump()
{
    const char *names[] = {"McZombie",
                           "Brainiac",
                           "David the Zombie",
                           "Alice the Zombie",
                           "Bob the Zombie Builder"};

    Zombie zombie(names[std::rand() % 4], this->_zombieType);
    zombie.announce();
}
