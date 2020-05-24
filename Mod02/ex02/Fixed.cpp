/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:32:53 by henri             #+#    #+#             */
/*   Updated: 2020/05/24 15:57:04 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/* -- CONSTRUCTORS -- */

Fixed::Fixed(): value(0) {
}

Fixed::Fixed(Fixed const &copy) {
	this->value = copy.getRawBits();
}

Fixed::Fixed(const int value) {
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(const float value) {
	this->value = roundf(value * (1 << Fixed::bits));
}

/* -- END CONSTRUCTORS -- */

Fixed::~Fixed() {
}

/* -- GETTERS -- */

int		Fixed::getRawBits() const {
	return (this->value);
}

/* -- SETTERS -- */

void	Fixed::setRawBits(int const raw) {
	this->value = raw;
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

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
    out << obj.toFloat();
    return (out);
}

/* -- STREAM OVERLOAD -- */

/* -- COMPARATOR OVERLOAD -- */

bool Fixed::operator>(Fixed const &obj) const {
	return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(Fixed const &obj) const {
	return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>=(Fixed const &obj) const {
	return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(Fixed const &obj) const {
	return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(Fixed const &obj) const {
	return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(Fixed const &obj) const {
	return (this->getRawBits() != obj.getRawBits());
}

/* -- ARITHMETICS OVERLOAD -- */

Fixed 	&Fixed::operator=(Fixed const &obj) {
	this->value = obj.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &obj) {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + obj.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &obj) {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - obj.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const &obj)
{
	Fixed tmp;
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)obj.getRawBits());
	tmp.setRawBits((tmp1 * tmp2) / (1 << Fixed::bits));
	return (tmp);
}

Fixed Fixed::operator/(Fixed const &obj)
{
	Fixed tmp;
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)obj.getRawBits());
	tmp.setRawBits((tmp1 * (1 << Fixed::bits)) / tmp2);
	return (tmp);
}

Fixed	Fixed::operator++() {
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);

	operator++();
	return (tmp);
}

Fixed	Fixed::operator--() {
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);

	operator--();
	return (tmp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

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
