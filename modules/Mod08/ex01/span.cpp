/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 16:49:16 by henri             #+#    #+#             */
/*   Updated: 2020/04/26 18:28:26 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

Span::Span(unsigned int n): n(n) {
	vec.reserve(n);
}

Span::~Span() {
	this->vec.clear();
}

Span::Span(Span const & source) {
	*this = source;
}

Span & Span::operator=(Span const & source) {
	if (this == &source)
		return *this;
	this->n = source.n;
	this->vec = source.vec;
	return *this;
}

void Span::addNumber(int n) {
	if (this->vec.size() == this->n)
		throw std::exception();
	this->vec.push_back(n);
}

long Span::shortestSpan(void) {
	long gap = LONG_MAX;
	long tmpgap;

	if (this->vec.size() <= 1)
		throw std::exception();

	std::vector<int> dup = this->vec;
	std::sort(dup.begin(), dup.end());
	std::vector<int>::iterator nextCompare = dup.begin();
	for (std::vector<int>::iterator it = dup.begin() + 1; it != dup.end(); it++) {
		tmpgap = std::abs(static_cast<long>(*it) - static_cast<long>(*nextCompare));
		if (tmpgap < gap)
			gap = tmpgap;
		nextCompare = it;
	}
	return gap;
}

long Span::longestSpan(void) {
	long min;
	long max;

	if (this->vec.size() <= 1)
		throw std::exception();
	/* https://stackoverflow.com/questions/9874802/how-can-i-get-the-max-or-min-value-in-a-vector */
	/* min_element or max_element return an iterator so * is requiered */
	min = static_cast<long>(*std::min_element(this->vec.begin(), this->vec.end()));
	max = static_cast<long>(*std::max_element(this->vec.begin(), this->vec.end()));
	return (std::abs(max - min));
}
