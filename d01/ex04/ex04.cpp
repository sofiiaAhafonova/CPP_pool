/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:54:16 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 09:54:19 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPtr = &brain;
    std::string &brainRef = brain;

    std::cout << *brainPtr << std::endl;
    std::cout << brainRef << std::endl;
}
