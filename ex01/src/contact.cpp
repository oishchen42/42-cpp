/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:34:34 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/28 21:58:53 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "colors.h"

void Contact::print_by_idx()
{
    std::cout << "--------------------------------------\n";
    std::cout << MAGNETA "CONTACT:\n" RESET;
    std::cout << ITALIC "first name: " RESET << _first_name << "\n";
    std::cout << ITALIC "last name: " RESET << _last_name << "\n";
    std::cout << ITALIC "nick name: " RESET << _nickname << "\n";
}