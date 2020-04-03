/*

class Person
{
  ... .. ...
};

class MathsTeacher : public Person
{
  ... .. ...
};

class Footballer : public Person
{
  .... .. ...
};

The derived class appears with
	- the declaration of a class followed by a colon
	- the keyword public and the name of base class from which it is derived.

Since, MathsTeacher and Footballer are derived from Person,
all data member and member function of Person can be accessible from them.

When creating a derived class from a base class, you can use different access specifiers to inherit the data members of the base class.

These can be public, protected or private.

In the above example, the base class Person has been inherited public-ly by MathsTeacher and Footballer.

Also, the member function of derived class overrides the member function of base class.

+ d'infos (bien expliquées) : https://www.programiz.com/cpp-programming/public-protected-private-inheritance

*/

#include <iostream>
using namespace std;

class Person
{
     public:
        string profession;
        int age;

        Person(): profession("unemployed"), age(16) { }
        void display()
        {
             cout << "My profession is: " << profession << endl;
             cout << "My age is: " << age << endl;
             walk();
             talk();
        }
        void walk() { cout << "I can walk." << endl; }
        void talk() { cout << "I can talk." << endl; }
};

// MathsTeacher class is derived from base class Person.
class MathsTeacher : public Person
{
    public:
       void teachMaths() { cout << "I can teach Maths." << endl; }
};

// Footballer class is derived from base class Person.
class Footballer : public Person
{
    public:
       void playFootball() { cout << "I can play Football." << endl; }
};

int main()
{
     MathsTeacher teacher;
     teacher.profession = "Teacher";
     teacher.age = 23;
     teacher.display();
     teacher.teachMaths();

     Footballer footballer;
     footballer.profession = "Footballer";
     footballer.age = 19;
     footballer.display();
     footballer.playFootball();

     return 0;
}
