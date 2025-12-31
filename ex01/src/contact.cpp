/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:34:34 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/31 15:07:54 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "colors.h"

void Contact::print_by_idx()
{
    std::cout << "--------------------------------------\n";
    std::cout << MAGENTA "CONTACT:" RESET << "\n";
    std::cout << ITALIC "first name: " RESET << _first_name << "\n";
    std::cout << ITALIC "last name: " RESET << _last_name << "\n";
    std::cout << ITALIC "nick name: " RESET << _nickname << "\n";
    std::cout << ITALIC "phone number: " RESET << _phone_nb << "\n";
    std::cout << ITALIC "darkest secret: " RESET << _victorias_secret << "\n";
    std::cout << "--------------------------------------\n";
}

bool is_alpha(const std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isalpha(str[i]))
            return (false);
    }
    return (true);
}

bool Contact::set_fn(const std::string &f_name)
{
    if (f_name.empty() || !is_alpha(f_name))
        return (setter_msg("The first name consists only of letters: "));
    _first_name = f_name;
    return (true);
}

std::string Contact::get_fn()
{ return (_first_name); }

bool Contact::set_ln(const std::string &l_name)
{
    if (l_name.empty() || !is_alpha(l_name))
        return (false);
    _last_name = l_name;
    return (true);
}

std::string Contact::get_ln()
{ return (_last_name); }

bool Contact::set_phone_nb(const std::string &phone)
{
    if (phone.empty())
        return (false);
    size_t i = 0;
    if (phone[0] == '+')
        i++;
    while (i < phone.length())
    {
        if (!std::isdigit(phone[i]))
            return (setter_msg("The nb must consist of digits, + at the beginning is allowed"));
        i++;
    }
    _phone_nb = phone;
    return (true);
}

std::string Contact::get_phone_nb()
{ return (_phone_nb); }

bool Contact::set_nick(const std::string &nick)
{
    if (nick.empty() || !is_alpha(nick))
        return (false);
    _nickname = nick;
    return (true);
}

std::string Contact::get_nick()
{ return (_nickname); }

bool Contact::set_secret(const std::string &secret)
{
    if (secret.empty() || !is_alpha(secret))
        return (false);
    _victorias_secret = secret;
    return (true);
}

std::string Contact::get_secret()
{ return (_victorias_secret); }

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool Contact::setter_msg(const std::string &msg)
{
    std::cout << BOLD MAGENTA<< "Error: \"" << msg << "\"" << RESET << "\n";
    return (false);
}
