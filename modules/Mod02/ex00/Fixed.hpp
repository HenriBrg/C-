/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:03:08 by henri             #+#    #+#             */
/*   Updated: 2020/04/08 18:13:17 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/* MAIN
# include <iostream>
# include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
 */

class Fixed {

	/* Fixed-points tutorial : go check this :
	    - https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming
	*/
	public:
		Fixed();
		Fixed(Fixed const &copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(Fixed const &source);
	private:
		int x;
		static const int bits = 8;
		/* Une variable membre statique est une variable qui existe toujours en
		un seul exemplaire, quel que soit le nombre d'instances de la classe. */
		/* Ici, à chaque appel de Fixed::bits, on aura toujours 8 */
};

#endif
