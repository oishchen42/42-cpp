/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:25:39 by oishchen          #+#    #+#             */
/*   Updated: 2025/12/28 21:49:53 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_nb;
    std::string _victorias_secret;

public:
    Contact();
    ~Contact();
    bool set_fn(std::string f_name);
    std::string get_fn();
    bool set_ln(std::string l_name);
    std::string get_ln();
    bool set_nick(std::string nick);
    std::string get_nick();
    bool set_phone_nb(std::string phone);
    std::string get_phone_nb();
    bool set_secret(std::string secret);
    std::string get_secret();
    void print_by_idx();
};

#endif

