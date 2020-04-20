/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 17:02:20 by henri             #+#    #+#             */
/*   Updated: 2020/04/20 17:54:25 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & source);
		virtual ~Intern ();
		Intern &operator=(const Intern & source);
		Form * makeForm(std::string const & name, std::string const & target);
	protected:
	private:
};

struct FormTab {
	std::string type;
	Form *(*make)(std::string);
};

# endif
