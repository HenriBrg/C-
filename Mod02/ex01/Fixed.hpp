/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:03:08 by henri             #+#    #+#             */
/*   Updated: 2020/04/08 23:31:40 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(Fixed const &copy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed &operator=(Fixed const &source);

		int		toInt(void)	const;
		float	toFloat(void) const;

	private:
		int value;
		static const int bits = 16;
		/* Une variable membre statique est une variable qui existe toujours en
		un seul exemplaire, quel que soit le nombre d'instances de la classe. */
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif
