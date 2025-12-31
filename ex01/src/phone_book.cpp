/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:02:20 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/31 15:34:45 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include "colors.h"

Phonebook::Phonebook() : _index(0), _nb_contacts(0)
{
}

Phonebook::~Phonebook()
{
}

static void print_table_header()
{
    std::cout << "____________________________________________" << "\n";
    std::cout << "Index     |First Name|Last Name |Nickname  |" << "\n";
    std::cout << "__________|__________|__________|__________|" << "\n";
}

void Phonebook::check_input(const std::string &prompt, bool (Contact::*set_funct)(const std::string &),
        Contact *contact)
{
    std::cout << prompt;
    std::string input;
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(0);
    while (!(((*contact).*set_funct)(input)))
    {
        std::cout << BOLD CYAN "You are on a thin ice my friend \n" RESET;
        std::cout << BOLD YELLOW "I bestow one more attempt upon you: " RESET;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    // std::cout << std::endl;
}

void    Phonebook::print_search(const std::string &text)
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
    check_input(BLUE ITALIC "Enter the first name: " RESET, &Contact::set_fn, &cntct);
    check_input(BLUE ITALIC "Enter the last name: " RESET, &Contact::set_ln, &cntct);
    check_input(BLUE ITALIC "Enter the nick name: " RESET, &Contact::set_nick, &cntct);
    check_input(BLUE ITALIC "Enter the phone number: " RESET, &Contact::set_phone_nb, &cntct);
    check_input(BLUE ITALIC "Enter the darkest secret: " RESET, &Contact::set_secret, &cntct);
    std::cout << GREEN BOLD << "The contact is created" << RESET << "\n";
    _contacts[_index++] = cntct;
    _nb_contacts++;
    if (_index == MAX_CONTACT)
        _index = 0;
}

void    Phonebook::print_by_idx()
{
    std::string input;
    size_t idx;
    std::cout << BLUE ITALIC "Now enter an index of a contact: " RESET;
    while (1)
    {
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input.length() > 1 || !std::isdigit(input[0]))
        {
            std::cout << BOLD MAGENTA "Error: You are beyond a comprehensive border of index\n" RESET;
            std:: cout <<  BLUE ITALIC "Venture one more time: " RESET ;
            continue;
        }
        idx = (input[0] - '0');
        if (idx >= _nb_contacts)
        {
            std::cout << BOLD MAGENTA "Error: The power you strive to reach surpasses of what you've created\n" RESET;
            std::cout << BLUE ITALIC "Venture one more time: " RESET ;
            continue;
        }
        else
        {
            _contacts[idx].print_by_idx();
            break ;
        }
    }
}

void    Phonebook::srch_cntct()
{
    if (_nb_contacts == 0)
    {
        std::cout << BOLD MAGENTA "Error: \"There is no created contact\"" RESET << "\n";
        return ;
    }
    size_t threshold = _nb_contacts < MAX_CONTACT ? _nb_contacts : MAX_CONTACT;
    std::cout << "The threshold is: " << threshold << "\n"; // delete
    print_table_header();
    for(size_t i = 0; i < threshold; i++)
    {
        std::cout << i << "         |";
        print_search(_contacts[i].get_fn());
        print_search(_contacts[i].get_ln());
        print_search(_contacts[i].get_nick());
        std::cout << "\n";
    }
    print_by_idx();
}
