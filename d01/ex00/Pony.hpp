/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:32:41 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 08:55:14 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony 
{
    private:
        std::string _name;
        std::string _color;
    public:
        Pony(std::string name, std::string color);
        ~Pony();
        void setName(std::string name);
        void setColor(std::string color);
        std::string getName(void);
        std::string getColor(void);
};


#endif
