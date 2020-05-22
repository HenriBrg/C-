/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:50:45 by henri             #+#    #+#             */
/*   Updated: 2020/04/20 00:00:31 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
Form("Presidential Pardon", 25, 5), target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & source):
Form(source), target(source.target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & source) {
	(void)source;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " a été pardonné par Zafod Beeblebrox" << std::endl;
}
