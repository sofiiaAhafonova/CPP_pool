/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:57:13 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:58:18 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

#include "Brain.hpp"

Brain::Brain(void) {}
Brain::~Brain(void) {}

std::string Brain::identify(void) const
{
    std::stringstream ss;
    ss << (void *)this;
    return ss.str();
}
