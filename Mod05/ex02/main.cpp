/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 00:24:36 by henri             #+#    #+#             */
/*   Updated: 2020/04/20 00:03:27 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat b1("Joe", 20);
	std::cout << b1 << std::endl;
	Form *sh = new ShrubberyCreationForm("Shurbbery");
	std::cout << *sh << std::endl;
	try {
		b1.signForm(*sh);
		sh->execute(b1);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << "\nTest 2 \n\n";

	Bureaucrat b2("Jack", 73);
	std::cout << b2 << std::endl;
	Form *ro = new RobotomyRequestForm("Robotomy");
	std::cout << *ro << std::endl;
	try {
		b2.signForm(*ro);
		ro->execute(b2);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << "\nTest 3 \n\n";

	Bureaucrat b3("Alfred", 3);
	std::cout << b3 << std::endl;
	Form *pr = new PresidentialPardonForm("Presidential");
	std::cout << *pr << std::endl;
	try {
		b3.signForm(*pr);
		pr->execute(b3);
		b3.signForm(*pr);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
}
