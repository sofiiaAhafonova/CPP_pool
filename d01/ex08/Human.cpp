/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:26:23 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:29:50 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
    std::cout << "Melee attack -> " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
    std::cout << "Ranged attack -> " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
    std::cout << "Intimidating shout -> " << target << std::endl;
}

typedef void (Human::*actionPtr)(std::string const &);

void Human::action(std::string const &action, std::string const &target)
{
    std::string names[3] = 
    {"meleeAttack", "rangedAttack", "intimidatingShout"};

    actionPtr actions[3] = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout};

    for (int i = 0; i < 3; i++)
    {
        if (names[i].compare(action) == 0)
        {
            (this->*actions[i])(target);
        }
    }
}
