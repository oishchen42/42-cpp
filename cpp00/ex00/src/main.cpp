/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:04:04 by oishchen          #+#    #+#             */
/*   Updated: 2025/10/17 17:04:19 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int				i {0};
	unsigned int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (++i < ac)
	{
		j = -1;
		std::string str = av[i];
		while (++j < str.length())
			str[j] = std::toupper(str[j]);
		std::cout << str;
		if (i == ac - 1)
			std::cout << std::endl;
	}
	return (0);
}
