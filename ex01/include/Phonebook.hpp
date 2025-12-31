/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:42:28 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/31 14:15:04 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACT 8

class Phonebook
{
private:
    Contact _contacts[MAX_CONTACT];
    size_t  _index;
    size_t  _nb_contacts;
    void check_input(const std::string &prompt, bool (Contact::*set_funct)(const std::string &),
        Contact *contact);
    void    print_by_idx();
public:
    Phonebook();
    ~Phonebook();
    void    add_cntct();
    void    srch_cntct();
};

#endif