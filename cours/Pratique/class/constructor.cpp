/* Important !

Compiler identifies a given member function is a constructor by its name and the return type.

Constructor has the same name as that of the class and it does not have any return type.

Also, the constructor is always public.

Constructor can be overloaded in a similar way as function overloading.
Overloaded constructors have the same name (name of the class) but different number of arguments.
Depending upon the number and type of arguments passed, specific constructor is called.
Since, there are multiple constructors present, argument to the constructor should also be passed while creating an object.

+ d'infos sur les constructor / destructor : voir module 01 : ex00

2 façons d'initialiser avec le constructor
- 1: dans la fonction constructor
- 2: dans la liste d'initialisation (largement préférable) :

	Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Épée rouillée"), m_degatsArme(10)
	{
	    //Rien à mettre dans le corps du constructeur, tout a déjà été fait !
	}

On peut surcharger un constructeur, le bon constructor sera appele en fonction
des arguments

*/

#include <iostream>
using namespace std;

class Area
{
    private:
       int length;
       int breadth;

    public:
       // Constructor
       Area(): length(5), breadth(2){ }

       void GetLength()
       {
           cout << "Enter length and breadth respectively: ";
           cin >> length >> breadth;
       }

       int AreaCalculation() {  return (length * breadth);  }

       void DisplayArea(int temp)
       {
           cout << "Area: " << temp;
       }

	   // Destructor
	   // ~Test() {
       //  delete[] ptr;
	   // }
};

int main()
{
    Area A1, A2;
    int temp;

    A1.GetLength();
    temp = A1.AreaCalculation();
    A1.DisplayArea(temp);

    cout << endl << "Default Area when value is not taken from user" << endl;

    temp = A2.AreaCalculation();
    A2.DisplayArea(temp);

    return 0;
}
