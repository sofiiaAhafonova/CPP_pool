/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:34:27 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:37:13 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
    Logger logger("log.txt");

    logger.log("console", "Program starting");
    logger.log("file", "Program starting (file)");
    logger.log("console", "nice");
    logger.log("wrong", "error");
}
