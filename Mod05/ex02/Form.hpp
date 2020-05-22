/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 16:13:42 by henri             #+#    #+#             */
/*   Updated: 2020/04/19 00:34:09 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(const Form & source);
		Form(std::string const & name, const int signGrade, const int execGrade);
		virtual ~Form ();
		Form &operator=(const Form & source);

		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		class AlreadySignedException: public std::exception {
			virtual const char *what() const throw();
		};
		class NoSignedException: public std::exception {
			virtual const char *what() const throw();
		};

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned() const;
		void beSigned(Bureaucrat const & b);
		virtual void execute(Bureaucrat const &bureaucrat) const = 0;

	protected:
	private:
		Form();
		std::string name;
		const int signGrade;
		const int execGrade;
		bool _signed;
};

std::ostream &operator<<(std::ostream &out, Form const &obj);

# endif
