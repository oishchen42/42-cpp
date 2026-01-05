/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:53:05 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/03 16:25:58 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
    int N = 10;
    Zombie *hrd = zombieHorde(N, "V");
    Zombie *zmb = newZombie("Alpha");
    zmb->announce();
    randomChump("Omega");
    for(int i = 0; i < N; i++)
    {
        hrd[i].announce();
    }
    delete [] hrd;
    delete(zmb);
    return (0);
}