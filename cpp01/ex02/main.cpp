/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:12:46 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/04 17:02:39 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *strPtr = &str;
    std::cout << "str: " << str << std::endl;
    std::cout << "strPtr value: " << strPtr << std::endl;
    std::cout << "accessing value of str thorough strPtr: " << *strPtr << std::endl;
    std::cout << std::endl;

    std::string &strRef = str;
    std::cout << "str address: " << &str << std::endl;
    std::cout << "strRef value: " << strRef << std::endl;
    std::cout << "strRef address: " << &strRef << std::endl;
}