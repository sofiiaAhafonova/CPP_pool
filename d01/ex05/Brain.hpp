/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:57:10 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:57:43 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
#define BRAIN_CLASS_H

#include <string>

class Brain
{
public:
    Brain(void);
    ~Brain(void);

    std::string identify(void) const;
};

#endif // BRAIN_CLASS_H
