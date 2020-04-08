# include "Fixed.hpp"

/*
Les fixeds points se base sur le shift : << et >>

Lire attentivement :

En fait on peut stocker un float dans un int en shiftant N fois (en l'occurence : 8 fois)
vers la gauche les bits du float d'entrée
Les bits concernant la partie décimale reste présent, mais on choisit de les lire ou non en shiftant

Pour 42.42, on fait 42.42 * 1 << 8 et on obient 2780037 qu'on stock dans un int value (membre de la classe)

1) Si on veut en extraire l'int, on fait l'inverse de '* 1 << 8' qui est '/ 1 << 8'
2) Si on veut en extraire le float, on fait pareil mais en castant en float la valeur qu'on shift
NB : la documentation donnée est totalement useless, la vrai explication est là : https://www.youtube.com/watch?v=S12qx1DwjVk
*/

int main(void) {

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
