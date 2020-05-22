/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 17:02:20 by henri             #+#    #+#             */
/*   Updated: 2020/04/20 18:07:48 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & source) {
	(void)source;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & source) {
	(void)source;
	return (*this);
}

Form *makeSCF(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *makeRRF(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *makePPF(std::string target) {
	return new PresidentialPardonForm(target);
}

Form * Intern::makeForm(std::string const & name, std::string const & target) {
	static struct FormTab tab[3] = {{ "shrubbery creation", makeSCF },
	{ "robotomy request", makeRRF }, { "presidential pardon", makePPF }};

	for (int i = 0; i < 3; i++) {
		if (tab[i].type == name) {
			std::cout << "Intern creates " << name << std::endl;
			return (tab[i].make(target));
		}
	}
	std::cout << "Nom de formulaire invalide" << std::endl;
	return (NULL);
}
