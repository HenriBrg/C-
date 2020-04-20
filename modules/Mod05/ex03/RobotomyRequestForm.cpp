/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:02:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/19 23:44:42 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target):
Form("Robotomy Request", 72, 45), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & source):
Form(source), target(source.target) {
}


RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & source) {
	(void)source;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "BZEEE BZEEEEEE BZEEEEEEEEEEEE BZIII" << std::endl;
	std::cout << this->target << " a bien été robotomizée" << std::endl;
}
