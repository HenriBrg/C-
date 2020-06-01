/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:08:45 by henri             #+#    #+#             */
/*   Updated: 2020/04/23 09:49:51 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Base {
	public:
		virtual ~Base() {};
};

class A: public Base {
	public:
		virtual void scream() { std::cout << "I AM -A-" << std::endl;} // VIRTUAL !
};

class B: public Base {
	public:
		virtual void scream() { std::cout << "I AM -B-" << std::endl;} // VIRTUAL !
};

class C: public Base {
	public:
		virtual void scream() { std::cout << "I AM -C-" << std::endl;} // VIRTUAL !
};

/* Affiche "A", "B" ou "C" selon le type réel de p */
void identify_from_pointer(Base * p) {
	(void)p;
}

/* Affiche "A", "B" ou "C" selon le type réel de p */
void identify_from_reference(Base & p) {
	(void)p;
}

/* https://codeburst.io/understanding-c-casts-ef1f36e54240

- static_cast won’t let you convert between two unrelated classes
- Don’t use static_cast to cast down the hierarchy
- Dynamic_cast performs a check. It returns nullptr if you’re trying to convert
  pointers or throws std::bad_cast if you’re trying to convert references.
  reinterpret_cast
- Reinterpret_cast : Do not use it if you don’t know what you’re doing.
  This cast converts any type of pointer to any other type of pointer, even unrelated types.
  No checks are performed. It simply copies the binary data from one pointer to another.
*/

class Mammal { public: virtual void scream() {} };
class Human: public Mammal {
    public:
        void scream()  {
            std::cout << "MOM" << std::endl;
        }
};

int main() {
	Human *h = new Human;
	Mammal *m = dynamic_cast<Mammal *>(h);
	Human *h1 = dynamic_cast<Human *>(m);

	h1 -> scream();

		return 0;
}
