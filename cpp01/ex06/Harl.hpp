/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:28:34 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/06 19:08:32 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
#define DEFAULT "[ Probably complaining about insignificant problems ]"

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning ( void );
    void error ( void );
    std::string _levels[4];
    void (Harl::*_complaitns[4])(void);
public:
    Harl();
    ~Harl();
    void complaints(const std::string &level);
};