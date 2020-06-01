/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 16:13:42 by henri             #+#    #+#             */
/*   Updated: 2020/06/01 17:11:14 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(std::string const & name, const int signGrade, const int execGrade): name(name), signGrade(signGrade), execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & source): name(source.name), signGrade(source.signGrade),
execGrade(source.execGrade), _signed(source._signed) {
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
}

Form & Form::operator=(Form const & source) {
	this->_signed = source._signed;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("<------ ! Grade too Low ! ------>");
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("<------ ! Grade too High ! ------>");
}

const char* Form::AlreadySignedException::what() const throw() {
	return ("<------ ! Already signed ! ------>");
}


std::string const Form::getName() const {
	return (this->name);
}

int Form::getSignGrade() const {
	return (this->signGrade);
}

int Form::getExecGrade() const {
	return (this->execGrade);
}

bool Form::getSigned() const {
	return (this->_signed);
}

void Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::AlreadySignedException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &obj) {
	out << "FORM - Name : " << obj.getName() << " signGrade : "
	<< obj.getSignGrade() << " execGrade : " << obj.getExecGrade() <<
	" and signed : " << obj.getSigned();
	return (out);
}
