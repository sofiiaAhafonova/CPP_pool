/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 08:38:10 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:01:56 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : _name(name), _color(color){
    std::cout << "Congratulations, "<< this->_color <<" pony was born. It name is "<< this->_name << std::endl;
    return;
}

Pony::~Pony(){
    std::cout << "Oh no! Pony passwed away! RIP, dear friend, " <<this->_name << std::endl;
    return;
}

void Pony::setName(std::string name){
    this->_name = name;
}

void Pony::setColor(std::string color){
    this->_color = color;
}

std::string Pony::getName(void){
    return this->_name;
}

std::string Pony::getColor(void){
    return this->_color;
}
