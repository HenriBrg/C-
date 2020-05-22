/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 16:12:22 by henri             #+#    #+#             */
/*   Updated: 2020/04/26 18:29:33 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <iostream>
# include <string>

class Span {
	public:
		Span(unsigned int n);
		virtual ~Span();
		Span(Span const & source);
		Span & operator=(Span const & source);

		void addNumber(int n);
		long shortestSpan(void);
		long longestSpan(void);
		std::vector<int> vec;

	private:
		unsigned int n;
};

# endif
