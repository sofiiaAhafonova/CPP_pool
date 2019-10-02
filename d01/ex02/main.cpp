/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:08:59 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:31:21 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent event;

    event.setZombieType("undead");
    Zombie *zombie = event.newZombie("Zom-by");
    Zombie *zombie2 = event.newZombie("Billy the Zombie");

    event.setZombieType("chump");
    for (int i = 0; i < 10; i++)
        event.randomChump();

    delete zombie;
    delete zombie2;
}