/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 22:55:11 by henri             #+#    #+#             */
/*   Updated: 2020/04/25 00:26:33 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array {

	public:
		Array(): tab(NULL), n(0) {}

		virtual ~Array(void) {
			if (this->tab)
				delete [] this->tab;
		}

		Array(unsigned int n): tab(new T[n]()), n(n) {}

		Array(Array const & source): tab(NULL), n(0) {*this = source;}

		Array const &operator=(Array const & source) {
			if (this == &source) /* Remember this */
				return *this;
			if (this->n != source.size()) {
				if (this->tab)
					delete [] this->tab;
				this->tab = new T[source.size()];
			}
			for (unsigned int i = 0; i < source.size(); i++)
				this->tab[i] = source.tab[i];
			this->n = source.size();
			return *this;
		}

		T &operator[](unsigned int i) {
			if (this->tab == 0 || i < 0 || i >= this->n)
				throw std::exception();
			return this->tab[i];
		}

		unsigned int size(void) const {
			return this->n;
		}


	private:
		T * tab;
		unsigned int n;
};

# endif
