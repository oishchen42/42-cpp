/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:01:32 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/05 14:30:40 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
    Weapon *weapon;
    std::string _name;

public:
    HumanB(const std::string &name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};