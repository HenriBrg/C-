/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:43:54 by henri             #+#    #+#             */
/*   Updated: 2020/04/26 23:55:50 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

int main(void) {

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
	    std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "--------- Personal Tests ---------" << std::endl;

	MutantStack<int> s1;

	s1.push( 1 );
	s1.push( 2 );

	int& i = s1.top( );
	const int& ii = s1.top( );

	std::cout << "The top integer of the stack s1 is "
        << i << "." << std::endl;
	i--;
	std::cout << "The next integer down is "<< ii << "." << std::endl;

	MutantStack <int>::size_type j;
	j = s1.size( );
	std::cout << "The stack length is " << j << "." << std::endl;

}
