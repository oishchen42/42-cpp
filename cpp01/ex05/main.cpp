/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:50:37 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/06 17:55:32 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;

    obj.complaints("DEBUG");
    obj.complaints("INFO");
    obj.complaints("WARNING");
    obj.complaints("ERROR");
    obj.complaints("NON");
    return (0);
}