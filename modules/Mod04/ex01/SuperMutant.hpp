/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:09:27 by henri             #+#    #+#             */
/*   Updated: 2020/04/14 19:33:27 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant & source);
		virtual ~SuperMutant ();
		SuperMutant &operator=(const SuperMutant & source);
		void takeDamage(int damage);
	protected:
	private:
};



# endif
