// 1)

// Const data members are not assigned values during its declaration.
// Const data members are assigned values in the constructor.

// 2)
// We can also make an object of class const.
// We make an object const by writing the const keyword at the beginning of the object declaration as shown below.
// --> A const class object is initialized through the constructor.
// --> We cannot modify the data members of a const object.

#include <iostream>

using namespace std;

class A
{
	public:
		int x;
		A()
		{
			x = 0; // On ne peut que assigner la valeur dans le constructor si l'objet a été déclaré en const
		}
};

int main()
{
	const A a;      // declaring const object 'a' of class 'A'
	a.x = 10;       // illegal compilation error
	return 0;
}

// 3)
// --> A const member function cannot change the value of any data member of the
// class and cannot call any member function which is not constant

// --> A const object can only call a const member function.
// We cannot make constructors const
class A
{
	public:
		int x;
		void func() const
		{
			x = 0; // this will give compilation error becausefunc()' is a const member function
				   // of class A and we are trying to assign a value to its data member 'x'.
		}
};
