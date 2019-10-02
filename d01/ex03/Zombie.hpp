/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:09:09 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:51:44 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

private:
    std::string _zombieName;
    std::string _zombieType;

public:
    Zombie();
    ~Zombie();
    
    void setZombieName(std::string name);
    void setZombieType(std::string name);
    void announce();
};

#endif