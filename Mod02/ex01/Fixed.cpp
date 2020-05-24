/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:32:53 by henri             #+#    #+#             */
/*   Updated: 2020/05/24 15:56:43 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/* -- CONSTRUCTORS -- */

Fixed::Fixed(): value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.getRawBits();
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));


	std::cout << "First : Value = " << this->value << std::endl;
	std::cout << "Second : Value = " << ((float)this->value / (1 << Fixed::bits)) << std::endl;
	std::cout << "Third : Value = " << (this->value  / (1 << Fixed::bits)) << std::endl;
}

/* -- END CONSTRUCTORS -- */

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* -- GETTERS -- */

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

/* -- SETTERS -- */

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/* -- OVERLOADED Functions -- */

Fixed 	&Fixed::operator=(Fixed const &source) {
	std::cout << "Assignation operator called" << std::endl;
	this->value = source.getRawBits();
	return (*this);
}

/* -- CORE Functions -- */

int 	Fixed::toInt(void) const {

	int x;

	x = this->value >> Fixed::bits;
	return (x);
}

float	Fixed::toFloat(void) const {

	float x;

	x = (float)this->value / (float)(1 << Fixed::bits);
	return (x);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

# include <iostream>

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
