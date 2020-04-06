/*

VOIR OPC = https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1897891-surchargez-un-operateur#/id/r-1897836

class className
{
    ... .. ...
    public
       returnType operator symbol (arguments)
       {
           ... .. ...
       }
    ... .. ...
};

Here, returnType is the return type of the function.
The returnType of the function is followed by operator keyword.
Symbol is the operator symbol you want to overload. Like: +, <, -, ++
You can pass arguments to the operator function in similar way as functions.

Operator overloading allows you to redefine the way operator works for user-defined types only (objects, structures).
It cannot be used for built-in types (int, float, char etc.).

Two operators = and & are already overloaded by default in C++.
For example: To copy objects of same class, you can directly use = operator. You do not need to create an operator function.

There are 4 operators that cannot be overloaded in C++.
They are :: (scope resolution), . (member selection), .* (member selection through pointer to function) and ?: (ternary operator).

It's your job as a programmer to use operator overloading properly and in consistent way.
Par exemple, décrementer dans un overload d'opérateur ++ n'a aucun sens.

*/

#include <iostream>
using namespace std;

class Test
{
   private:
      int count;

   public:
       Test(): count(5){}

       void operator ++()
       {
          count = count+1;
       }
       void Display() { cout<<"Count: "<<count; }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    ++t;
    t.Display();
    return 0;
}
