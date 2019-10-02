/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:32:29 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:00:52 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony *Peter = new Pony("Peter", "black");
    std::cout << "Pony's name is " << Peter->getName() << ". It has " << Peter->getColor() << " color." << std::endl;
    delete Peter;
}

void ponyOnTheStack(void)
{
    Pony Tim = Pony("Tim", "brown");
    std::cout << "Pony's name is " << Tim.getName() << ". It has " << Tim.getColor() << " color." << std::endl;
}

int main()
{
    std::cout << "Initialized ponyOnTheHeap" << std::endl;
    ponyOnTheHeap();
    std::cout << "ponyOnTheHeap destroyed." << std::endl;
    std::cout << "Initialized ponyOnTheStack" << std::endl;
    ponyOnTheStack();
    std::cout << "ponyOnTheStack destroyed." << std::endl;
    return (0);
}
