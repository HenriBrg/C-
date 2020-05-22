/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 19:02:57 by henri             #+#    #+#             */
/*   Updated: 2020/04/19 22:14:43 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>

# include "Form.hpp"

class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(const ShrubberyCreationForm & source);
		virtual ~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm & source);

		class FileError: public std::exception {
				virtual const char * what() const throw();
		};
		void execute(Bureaucrat const & executor) const;
	protected:
	private:
		ShrubberyCreationForm();
		std::string const target;
		static std::string const draw[3];
};

# endif
