/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:44:23 by henri             #+#    #+#             */
/*   Updated: 2020/06/04 00:05:39 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <typeinfo>

/* Class Template VS Template Class */
/* https://stackoverflow.com/questions/8810224/inheriting-from-a-template-class-in-c */
/* En gros : std::stack = conteneur et std::stack<int> classe donc on peut en hériter */

/*
En fait stack est fait pour être encapsulé : http://www.cplusplus.com/reference/stack/stack/
C'est pas vraiment un container, par defaut il inclu une container dequ pour sa logique e mais on peut très bien changer ça
	stacks are implemented as containers adaptors, which are classes that use an encapsulated
	object of a specific container class as its underlying container, providing a specific
	set of member functions to access its elements.
*/

template <typename T>
class MutantStack: public std::stack<T>
{

	public:
		MutantStack(): std::stack<T>() {}
		virtual ~MutantStack() {}
		/* 2 constructeurs car 2 façons de build un MutantStack */
		MutantStack(std::stack<T> const & source): std::stack<T>(source) {}
		MutantStack(MutantStack const & source): std::stack<T>(source) {}
		/* On utilisera la surcharge de = la classe stack<T> */
		using std::stack<T>::operator=;

		/* https://docs.microsoft.com/fr-fr/cpp/cpp/aliases-and-typedefs-cpp?view=vs-2019 */
		/* https://docs.microsoft.com/fr-fr/cpp/standard-library/stack-class?view=vs-2019 */
		/* Un typename d'iterator ne sera valable que dans un template ! */
		typedef typename std::stack<T>::container_type::iterator itMutS;

		itMutS begin(void) {
			return std::begin(std::stack<T>::c);
		}
		itMutS end(void) {
			return std::end(std::stack<T>::c);
		}
};

# endif
