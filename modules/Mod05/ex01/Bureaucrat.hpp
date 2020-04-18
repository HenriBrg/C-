/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 23:11:15 by henri             #+#    #+#             */
/*   Updated: 2020/04/18 17:34:23 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
class Bureaucrat;
# include "Form.hpp"

/*
When you declare any other constructor, the compiler will not generate the default
constructor for you. If you have specified a default no-argument constructor,
you can make it private.
*/

class Bureaucrat
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat & source);
		virtual ~Bureaucrat ();
		Bureaucrat &operator=(const Bureaucrat & source);
		int getGrade() const;
		std::string const getName() const;
		void incrementGrade(void);
		void decrementGrade(void);
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		void signForm(Form & f) const;
	protected:
	private:
		Bureaucrat();
		std::string const name;
		int grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

# endif
