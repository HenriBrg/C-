# include <iostream>
# include <string>

class A {
	public:
		A();
		/* Si virtual, alors la fonction faireParler prendra la méthode de la fille */
		/* virtual */
		virtual void printSomething() {
			std::cout << "\nHello I am the function inside A\n" << std::endl;
		}
		virtual  ~A() { std::cout << "Destructor de A" << std::endl; };
		int vie;
		int degat;
		int armure;
	protected:
		void protFunc() {
			std::cout << "\nHello protFunc\n" << std::endl;
		}
		std::string protect; // Cannot be reach with bb->A::protect
};

class B: public A {
	public:
		B();
		virtual ~B() { std::cout << "Destructor de B" << std::endl; }
		void printSomething() { std::cout << "\nHello I am the function inside B\n" << std::endl; }
		/* Si ces variables sont définies, alors elles prévaudront sur la classe parent
		et devront être assignée dans le constructor du coup */
		// int vie;
		// int degat;
		// int armure;
		int bAttribute;
		std::string getprotectedData() {
			this->A::protFunc();
			return this->A::protect;
		}
};

void faireParler(A *c) {
	c->printSomething();
}

A::A(): vie(42), degat(10), armure(3), protect("I am protected !") {
	std::cout << "Constructor de A" << std::endl;
}

B::B(): A(), bAttribute(77) /*  vie(20), degat(5), armure(2) */ {
	std::cout << "Constructor de B" << std::endl;
}

int main() {
	B *bb = new B;
	std::cout << "B : " << bb->vie << bb->A::degat /* Public */ << bb->armure << std::endl;
	faireParler(bb); // je passe une classe b alors que c'est censé recevoir A, normal car fille
	std::cout << bb->getprotectedData();

	delete bb;

	/* Pointeur sur classe dérivée */
	A *ptrA = new B;
	delete ptrA; /* Si le destructeur n'est pas virtuel, alors B ne sera pas détruit ! */
	/* Mais les FLAGS 3W empeche de compiler si le Destructor est pas virtual dans ce cas */


}
