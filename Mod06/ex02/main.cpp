/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:08:45 by henri             #+#    #+#             */
/*   Updated: 2020/04/23 16:02:41 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <random>

class Base {public: virtual ~Base() {};};
class A: public Base {};
class B: public Base {};
class C: public Base {};

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p) {
	Base b;

	try {
		b = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast exc) {}
	try {
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::bad_cast exc) {}
	try {
		b = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::bad_cast exc) {}
}
/* https://en.cppreference.com/w/cpp/language/dynamic_cast
If the cast is successful, dynamic_cast returns a value of type new-type.
If the cast fails and new-type is a pointer type, it returns a null pointer of that type. */

int main() {
	int r;
	Base *p;

	srand(time(0));
	for (int i = 0; i < 5; i++) {
		r = rand() % 3;
		if (r == 0) p = new A;
		else if (r == 1) p = new B;
		else p = new C;
		identify_from_pointer(p);
		identify_from_reference(*p);
	}
}
