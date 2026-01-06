/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:05:55 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/05 14:29:37 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) { this->type = type; }

Weapon::~Weapon(void) { }

const std::string &Weapon::get_type() const { return (this->type); }

void Weapon::setType(const std::string &type) { this->type = type; }