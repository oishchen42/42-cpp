/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:01:29 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/05 14:34:03 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) :
weapon(weapon),
_name(name)
{}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << this->weapon.get_type() << std::endl;
}
