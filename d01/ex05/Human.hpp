/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:57:04 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:58:39 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

#include "Brain.hpp"

class Human
{
public:
    Human(void);
    ~Human(void);

    const Brain &getBrain() const;
    std::string identify() const;

private:
    const Brain _brain;
};

#endif // HUMAN_CLASS_H
