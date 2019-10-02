/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:26:31 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:30:52 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
    Human h;

    std::string target = "Bad Guy";
    h.action("meleeAttack", target);
    h.action("rangedAttack", target);
    h.action("intimidatingShout", target);
}