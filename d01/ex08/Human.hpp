/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:26:14 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:27:56 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

#include <string>

class Human
{
private:
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
    void intimidatingShout(std::string const &target);

public:
    void action(std::string const &action_name, std::string const &target);
};

#endif // HUMAN_CLASS_H
