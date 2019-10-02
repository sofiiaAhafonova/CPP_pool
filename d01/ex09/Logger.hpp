/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:34:18 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:48:16 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_CLASS_H
#define LOGGER_CLASS_H

#include <string>

class Logger
{
public:
    Logger(std::string filename);
    ~Logger(void);

    void log(std::string const &dest, std::string const &message);

private:
    void logToFile(std::string const &message);
    void logToConsole(std::string const &message);
    std::string makeLogEntry(std::string const &message) const;
    static std::string currentDate(void);

    std::string _filename;
};

#endif // LOGGER_CLASS_H
