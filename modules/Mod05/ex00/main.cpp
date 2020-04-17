/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 00:24:36 by henri             #+#    #+#             */
/*   Updated: 2020/04/18 00:31:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat Pierre("Pierre", 1);
		std::cout << Pierre << std::endl;
		Pierre.incrementGrade();
		std::cout << Pierre << std::endl;
	} catch(std::exception const & exc) {
		std::cerr << exc.what() << std::endl;
	}

	try {
		Bureaucrat Paul("Paul", 150);
		std::cout << Paul << std::endl;
		Paul.decrementGrade();
		std::cout << Paul << std::endl;
	} catch(std::exception const &exc) {
		std::cerr << exc.what() << std::endl;
	}

	try {
		Bureaucrat Jacques("Jacques", 1);
		std::cout << Jacques << std::endl;
		Jacques.decrementGrade();
		Jacques.decrementGrade();
		std::cout << Jacques << std::endl;
		Jacques.incrementGrade();
		Jacques.incrementGrade();
		Jacques.incrementGrade();
		Jacques.incrementGrade();
	} catch(std::exception const &exc) {
		std::cerr << exc.what() << std::endl;
	}
}
