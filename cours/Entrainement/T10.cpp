#include <stack>
#include <iostream>
#include <typeinfo>

#include <queue>
#include <iostream>

// ---------> ::C

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack(): std::stack<T>() {
			std::cout << "Constructeur" << std::endl;
		}
		void doSomethingFromContainerType() {
			std::cout << "doSomethingFromContainerType" << std::endl;
		}

		typedef typename std::stack<T>::container_type::iterator itMutS;

		itMutS getIter() {
			return std::begin(std::stack<T>::c);
		}

		typedef typename std::stack<T>::container_type container_type;

		container_type & getC() {
			return this->c;
		}

};


template <class T>
class Adapter : public T {
public:
    typedef typename T::container_type container_type;
    container_type &get_container() { return this->c; }
};

int main() {

	MutantStack<int> mstack;
	std::cout << typeid(mstack).name() << std::endl;

	// DEQUE
	std::stack<int>::container_type s;
	s.push_front(10); // s = deque car sous-jacent de stack
	std::cout << typeid(s).name() << std::endl;

	// MUTANT
	MutantStack<int>::container_type s2;
	s2.push_front(10);
	// s.doSomethingFromContainerType(); // Visiblement, on est toujours sur deque, quoi que logique au final
	std::cout << typeid(s2).name() << std::endl;
	MutantStack<int>::itMutS it = s2.begin();
	std::cout << *it << std::endl;
	s2.push_back(20);
	it = s2.begin() + 1; // Ou alors it++;
	std::cout << *it << std::endl;





	// Ok alors ici on tente d'accéder à ::c qui est accessible que par héritage de stack (protected)
	// Voir la doc officielle et le lien stack ci dessous

	std::cout << "\n----------------" << std::endl;

	// Ca compile mais aucun sens :

	typedef MutantStack<int> MT;
	typedef MutantStack<MT> A;
	A myVar;
	A::container_type & dd = myVar.getC();


	// https://stackoverflow.com/questions/1185252/is-there-a-way-to-access-the-underlying-container-of-stl-container-adaptors

	typedef std::queue<int> C;
    typedef Adapter<C> T;

    T adapter;

    for(int i = 0; i < 10; ++i) {
        adapter.push(i);
    }

    T::container_type &c = adapter.get_container();
    for(T::container_type::iterator it = c.begin(); it != c.end(); ++it) {
        std::cout << *it << std::endl;
    }

}
