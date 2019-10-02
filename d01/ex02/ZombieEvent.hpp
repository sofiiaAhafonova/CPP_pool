/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:09:15 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:12:27 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{

private:
    std::string _zombieType;

public:
    ZombieEvent();
    ~ZombieEvent();

    void setZombieType(std::string type);
    Zombie *newZombie(std::string name); //create a Zombie with the chosen type, name it, and return it
    void randomChump();                  //create a Zombie with a random name, and make it announce itself
};

#endif
