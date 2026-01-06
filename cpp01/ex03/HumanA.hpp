/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:01:25 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/05 14:34:01 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA{
private:
    Weapon &weapon;
    std::string _name;

public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack();
};