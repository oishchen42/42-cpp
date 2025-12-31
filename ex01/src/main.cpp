/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:49:05 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/31 15:18:46 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colors.h>
#include "Phonebook.hpp"

int main()
{
    Phonebook   phonebook;
    std::string input;

    std::cout << "Available commands: <ADD>, <SEARCH>, <EXIT>\n";
    while (1)
    {
        std::cout << BLUE ITALIC "Enter a command: " RESET;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input == "ADD")
            phonebook.add_cntct();
        else if (input == "SEARCH")
            phonebook.srch_cntct();
        else if (input == "EXIT")
            return (0);
        else
        {
            std::cout << ITALIC BOLD RED "Heed my words i see no such command\n";
            std::cout << "If I had such a command you would interact, trust me\n";
            std::cout << "But i see none, so why wouldn't you try: ADD, SEARCH or EXIT\n" RESET ;
        }
    }
    return (0);
}