/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <sahafono@student.unit.ua >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 10:34:12 by sahafono          #+#    #+#             */
/*   Updated: 2019/10/02 10:48:55 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <sstream>
#include <iostream>
#include <ctime>
#include <iomanip>

#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename) {}
Logger::~Logger(void) {}

void Logger::logToFile(std::string const &message)
{
    std::ofstream of(this->_filename);

    of << makeLogEntry(message);
}

void Logger::logToConsole(std::string const &message)
{
    std::cout << makeLogEntry(message);
}

std::string Logger::currentDate()
{

    std::string resTime;

    time_t rawtime;
    struct tm *timeinfo;
    char buffer[25];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, 25, " [%d.%m.%Y %H:%M:%S] ", timeinfo);
    resTime = buffer;
    return resTime;
}

std::string Logger::makeLogEntry(std::string const &message) const
{
    std::string formattedStr;
    formattedStr = currentDate()  + message;
    return formattedStr;
}

typedef void (Logger::*logAction)(std::string const &);

void Logger::log(std::string const &dest, std::string const &message)
{
    std::string names[2] = {
        "file", "console"};

    logAction actions[2] = {
        &Logger::logToFile, &Logger::logToConsole};

    for (int i = 0; i < 2; i++)
    {
        if (names[i].compare(dest) == 0)
            (this->*actions[i])(message);
    }
}