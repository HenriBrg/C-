/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 23:50:45 by henri             #+#    #+#             */
/*   Updated: 2020/04/20 00:00:33 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm & source);
		virtual ~PresidentialPardonForm ();
		PresidentialPardonForm &operator=(const PresidentialPardonForm & source);
		void execute(Bureaucrat const &executor) const;

	protected:
	private:
		PresidentialPardonForm();
		std::string const target;

};

# endif
