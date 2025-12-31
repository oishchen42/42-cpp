/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:02:20 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/31 14:22:21 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include "colors.h"

Phonebook::Phonebook() : _index(0), _nb_contacts(1)
{
}

Phonebook::~Phonebook()
{
}

static void print_table_header()
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void Phonebook::check_input(const std::string &prompt, bool (Contact::*set_funct)(const std::string &),
        Contact *contact)
{
    std::cout << prompt << "\n";
    std::string input;
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(0);
    while (!(((*contact).*set_funct)(input)))
    {
        std::cout << "Wrong input, try again\n";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
}

void    print_search(const std::string &text)
{
    if (text.length() > 10)
        std::cout << text.substr(0, 9) << ".";
    else
    {
        std::cout << text;
        for (size_t i = 0; i < 10 - text.length(); i++)
            std::cout << " ";
    }
    std::cout << "|";
}

void    Phonebook::add_cntct()
{
    Contact cntct;
    check_input("Enter the first name: ", &Contact::set_fn, &cntct);
    check_input("Enter the last name: ", &Contact::set_ln, &cntct);
    check_input("Enter the nick name: ", &Contact::set_nick, &cntct);
    check_input("Enter the phone number: ", &Contact::set_phone_nb, &cntct);
    check_input("Enter the darkest secret: ", &Contact::set_secret, &cntct);
    _contacts[_index++] = cntct;
    _nb_contacts++;
    if (_index == MAX_CONTACT - 1)
        _index = 0;
}

void    Phonebook::print_by_idx()
{
    std::string input;
    size_t idx;

    while (1)
    {
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input.length() > 1 || !std::isdigit(input[0]))
        {
            std::cout << "The index should be a digit in the range of [1; nb of contacts]\n";
            continue;
        }
        idx = (input[0] - '0') + 1;
        if (idx > _nb_contacts)
        {
            std::cout << "The idx is larger than the current nb of contacts\n";
            continue;
        }
        else
        {
            _contacts[idx - 1].print_by_idx();
            break ;
        }
    }
}

void    Phonebook::srch_cntct()
{
    if (_nb_contacts == 0)
    {
        std::cout << "No contacts were created\n";
    }
    size_t threshold = _nb_contacts < MAX_CONTACT ? _nb_contacts : MAX_CONTACT;
    print_table_header();
    for(size_t i = 0; i < threshold; i++)
    {
        std::cout << i << "         |";
        print_search(_contacts[i].get_fn());
        print_search(_contacts[i].get_ln());
        print_search(_contacts[i].get_nick());
    }
    std::cout << "Now enter the index of a user\n";
    print_by_idx();
}
