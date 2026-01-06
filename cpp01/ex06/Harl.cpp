/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:51:35 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/06 19:09:33 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    _complaitns[0] = &Harl::debug;
    _complaitns[1] = &Harl::info;
    _complaitns[2] = &Harl::warning;
    _complaitns[3] = &Harl::error;
    _levels[0] = "DEBUG";
    _levels[1] = "INFO";
    _levels[2] = "WARNING";
    _levels[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "[ DEBUG ]\n";
    std::cout << DEBUG_MSG << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]\n";
    std::cout << INFO_MSG << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\n";
    std::cout << WARNING_MSG << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]\n";
    std::cout << ERROR_MSG << std::endl;
}

void Harl::complaints(const std::string &level)
{
    int lvl = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == _levels[i])
            lvl = i;
    }
    while (lvl != -1 && lvl != 4)
    {
        (this->*_complaitns[lvl])();
        std::cout << std::endl;
        lvl++;
    }
    if (lvl == -1)
        std::cout << DEFAULT << std::endl;
}
