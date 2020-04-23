/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 16:40:02 by henri             #+#    #+#             */
/*   Updated: 2020/04/23 18:19:26 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename S>
void swap(S & a, S & b) {
   S tmp = a;
   a = b;
   b = tmp;
}

template <typename Mi>
Mi & min(Mi & a, Mi & b) {
	if (b > a)
		return (a);
	return (b);
}

template <typename Ma>
Ma max(Ma & a, Ma & b) {
	if (a > b)
		return (a);
	return (b);
}

int main(void) {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	char	x = 'a';
	char	y = 'b';

	double	u = 21.21;
	double	v = 42.42;

	std::string e("Hello");
	std::string f("Template");

	std::cout << min<char>(x, y) << std::endl;
	std::cout << max<double>(u, v) << std::endl;
	swap(e, f);
	std::cout << e << std::endl;
	std::cout << f << std::endl;

}
