/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:57:07 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:58:55 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {}
Human::~Human(void) {}

const Brain &Human::getBrain(void) const
{
    return this->_brain;
}

std::string Human::identify(void) const
{
    return this->_brain.identify();
}
