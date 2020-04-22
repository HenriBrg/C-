/*

au moment où l'ordinateur arrive sur une instructionthrow, il saute toutes les
instructions suivantes et appelle le destructeur de tous les objets déclarés
à l'intérieur du bloctry

L'exécution reprend après le bloccatch
*/

# include <string>
# include <iostream>

class testing {
	public:
		testing(int number): n(number) {}
		class Negative: public std::exception {
			virtual const char * what() const throw();
		};
		class Supto10: public std::exception {
			virtual const char * what() const throw();
		};
		int getn() {return this->n;};
	private:
		int n;
};

const char * testing::Negative::what() const throw() {
	return "N IS NEGATIVE !";
}


const char * testing::Supto10::what() const throw() {
	return "N IS Supto10 !";
}

int main() {
	testing num(-5);

	try {
		if (num.getn() < 0)
			throw testing::Negative();
		else if (num.getn() > 10)
			throw testing::Supto10();
	} catch (std::exception const & exception) {
		std::cout << exception.what() << std::endl;
	}
}
