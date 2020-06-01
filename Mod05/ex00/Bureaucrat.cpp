/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:11:15 by henri             #+#    #+#             */
/*   Updated: 2020/06/01 17:01:00 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name), grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & source): name(source.name), grade(source.grade) {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & source) {
	this->grade = source.grade;
	return (*this);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

std::string const Bureaucrat::getName() const {
	return (this->name);
}

void Bureaucrat::incrementGrade(void) {
	this->grade -= 1;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void) {
	this->grade += 1;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("<------ ! Grade too Low ! ------>");
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("<------ ! Grade too High ! ------>");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
