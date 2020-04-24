/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 22:54:35 by henri             #+#    #+#             */
/*   Updated: 2020/04/25 00:39:40 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main(void) {

	std::cout << "INT" << std::endl;
	Array<int> a(1);
	std::cout << a.size() << std::endl;

	Array<int> b(a);
	std::cout << b.size() << std::endl;

	Array<int> c;
	std::cout << c.size() << std::endl;
	c = b;
	std::cout << c.size() << std::endl;

	std::cout << "STRING" << std::endl;

	Array<std::string> d(3);
	std::cout << d.size() << std::endl;

	std::cout << "DOUBLE" << std::endl;
	Array<double> e(3);
	std::cout << e.size() << std::endl;
	try {
		e[e.size()] = 0; /* Une case au delà de la fin du tableau */
	} catch (const std::exception & exc) {
		std::cout << exc.what() << std::endl;
	}

	try {
		e[-1] = 42; /* Une case au delà de la fin du tableau */
	} catch (const std::exception & exc) {
		std::cout << exc.what() << std::endl;
	}

	for (size_t i = 0; i < e.size(); i++)
		e[i] = 42.42;

	for (size_t i = 0; i < e.size(); i++)
		std::cout << e[i] << " ";

}
