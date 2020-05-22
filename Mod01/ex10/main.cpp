/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:44:57 by henri             #+#    #+#             */
/*   Updated: 2020/04/07 00:34:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

int main(int ac, char **av)
{
	if (ac == 1) {
		try {
			/* You can pass cin to a normal member function if the parameter type is istream&.
			http://www.cplusplus.com/forum/beginner/74008/ */
			Cat::readOneFile(std::cin);
		} catch (const char *error) {
			std::cerr << "cato9tails : " << error << std::endl;
			return (1);
		}
	}
	else
	{
		for (size_t i = 1; i < (size_t)ac; i++) {
			try {
				Cat::openRead(av[i]);
			} catch (const char *error) {
				std::cerr << "cato9tails : " << av[i] << " : "<< error << std::endl;
				return (1);
			}
		}
	}
	return (0);
}
