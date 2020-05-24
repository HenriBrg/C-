/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:03:08 by henri             #+#    #+#             */
/*   Updated: 2020/05/24 15:54:52 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*

# include "Fixed.hpp"
# include <iostream>

int main(void) {

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

*/

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

		Fixed &operator=(Fixed const &obj);
		bool operator>(Fixed const &obj) const;
		bool operator<(Fixed const &obj) const;
		bool operator>=(Fixed const &obj) const;
		bool operator<=(Fixed const &obj) const;
		bool operator==(Fixed const &obj) const;
		bool operator!=(Fixed const &obj) const;

		Fixed	operator+(Fixed const &obj);
		Fixed	operator-(Fixed const &obj);
		Fixed	operator*(Fixed const &obj);
		Fixed	operator/(Fixed const &obj);

		/* https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/ */

		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);

		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static		 Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
		static		 Fixed	&max(Fixed &a, Fixed &b);

		int		toInt(void)	const;
		float	toFloat(void) const;

	private:
		int value;
		static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);


#endif
