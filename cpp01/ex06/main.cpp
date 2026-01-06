/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:50:37 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/06 19:07:07 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl obj;

    if (ac != 2)
    {
        std::cout << "try: <binary> <(DEBUG/INFO/WARNING/ERROR) in caps>\n";
        return (0);
    }
    std::string msg = av[1];
    obj.complaints(msg);
    return (0);
}