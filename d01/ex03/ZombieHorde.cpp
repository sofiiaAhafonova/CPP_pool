/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:33:13 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:50:32 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    const char *names[] = {"McZombie",
                           "Brainiac",
                           "David the Zombie",
                           "Alice the Zombie",
                           "Bob the Zombie Builder"};
    srand(time(NULL));
    N < 0 ? N = 0 : 0;
    zombie = new Zombie[N];
    _numberOfZombie = N;
    for (size_t i = 0; i < N; i++)
    {
        zombie[i].setZombieName(names[std::rand() % 4]);
        zombie[i].setZombieType("angry");
    }
    
}

ZombieHorde::~ZombieHorde()
{
    delete[] zombie;
}

void ZombieHorde::announce()
{
    int i = 0;

    while (i < this->_numberOfZombie)
    {
        this->zombie[i].announce();
        i++;
    }
}