/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:08:45 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:08:48 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <string>

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon(void);

    const std::string getType(void) const;
    void setType(std::string type);

private:
    std::string _type;
};

#endif // WEAPON_CLASS_H