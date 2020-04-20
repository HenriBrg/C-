/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:02:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/19 23:40:54 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm & source);
		virtual ~RobotomyRequestForm ();
		RobotomyRequestForm &operator=(const RobotomyRequestForm & source);
		void execute(Bureaucrat const &executor) const;
	protected:
	private:
		RobotomyRequestForm();
		std::string const target;
};

# endif
