/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:53:02 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/03 15:38:22 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

Zombie::Zombie(std::string name) : _name(name)
{};

Zombie::Zombie(void) : _name("Zombie")
{};

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed\n";
};

void Zombie::announce()
{
    std::cout << _name <<": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie(std::string name)
{
    Zombie *new_zmb = new Zombie(name);
    return (new_zmb);
}

void randomChump( std::string name )
{
    Zombie temp_zmb = Zombie(name);
    temp_zmb.announce();
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zmbHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        zmbHorde[i].setName(name);
    return (zmbHorde);
}

void Zombie::setName(std::string name)
{
    _name = name;
}
