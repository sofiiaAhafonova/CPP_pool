/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:33:09 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:37:42 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde
{

private:
    int _numberOfZombie;

public:
    Zombie *zombie;

    ZombieHorde(int N);
    ~ZombieHorde();

    void announce();
};

#endif
