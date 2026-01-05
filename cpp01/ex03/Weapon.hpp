/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:30:48 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/04 23:57:15 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon{
private:
    std::string _type;
public:
    Weapon(std::string &type);
    ~Weapon();
    const   std::string &get_type(void);
    void    set_type(const std::string &new_type);
};