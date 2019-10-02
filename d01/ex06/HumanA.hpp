/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:08:10 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:08:13 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
#define HUMANA_CLASS_H

#include <string>

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon &w);
    ~HumanA(void);

    void attack(void) const;

private:
    std::string _name;
    Weapon &_weapon;
};

#endif // HUMANA_CLASS_H
