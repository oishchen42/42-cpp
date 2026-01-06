/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:01:22 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/05 14:32:07 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name):
weapon(NULL),
_name(name)
{}

HumanB::~HumanB() {}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << _name << " attacks with their " << this->weapon->get_type() << std::endl;
    else
        std::cout << _name << " attacks with no weapon " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}