/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:25:52 by henri             #+#    #+#             */
/*   Updated: 2020/05/30 15:24:58 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
	public:
		Victim();
		Victim(std::string const & name);
		Victim(const Victim & source);
		virtual ~Victim();
		Victim &operator=(const Victim & source);
		std::string const & getName(void) const;
		virtual void getPolymorphed(void) const;
	protected:
		std::string name;
	private:
};

std::ostream &operator<<(std::ostream &out, Victim const & victim);

# endif
