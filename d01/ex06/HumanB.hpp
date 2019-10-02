/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:09:49 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:09:52 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
#define HUMANB_CLASS_H

#include <string>

#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string name);
    ~HumanB(void);

    void attack(void) const;
    void setWeapon(Weapon &w);

private:
    std::string _name;
    Weapon *_weapon;
};

#endif // HUMANA_CLASS_H
