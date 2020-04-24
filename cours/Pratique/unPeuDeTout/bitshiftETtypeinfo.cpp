# include <iostream>
# include <typeinfo>

class Base {
public:
   virtual void vvfunc() {}
};

class Derived : public Base {};

struct champ_de_bits
{
    unsigned a : 1;
    unsigned b : 2;
    unsigned c : 3;

	/*
	Un champ de bits est une structure composée exclusivement de champs de type int
	ou unsigned int dont la taille en bits de chacun est précisée. Cette taille ne peut être
	supérieure à la taille en bits du type int. L’exemple ci-dessous défini une structure
	composée de trois champs de bits, a, b et c de respectivement un, deux et trois bits.
	*/
};

using namespace std;
int main() {
   Derived* pd = new Derived;
   Base* pb = pd;
   cout << typeid( pb ).name() << endl;   //prints "class Base *"
   cout << typeid( *pb ).name() << endl;   //prints "class Derived"
   cout << typeid( pd ).name() << endl;   //prints "class Derived *"
   cout << typeid( *pd ).name() << endl;   //prints "class Derived"

 	int x = 10; // 00001010
	int y = 8; // 00001000
	std::cout << (x << 1) << std::endl;
	std::cout << (x ^ y) << std::endl;
	std::cout << (x | y) << std::endl;
	std::cout << ~x << std::endl; // ~ inverse en binaire : donc 10 devient -11 (1 de décalage positif/négatif)
	std::cout << (x & 0x8) << std::endl;
	std::cout << (x | 0x9) << std::endl;

/*
l’opérateur « et » : & ;
l’opérateur « ou inclusif » : | ;
l’opérateur « ou exclusif » : ^ ;
l’opérateur de négation ou de complément : ~ ;
l’opérateur de décalage à droite : >> ;
l’opérateur de décalage à gauche : <<.
*/
}
