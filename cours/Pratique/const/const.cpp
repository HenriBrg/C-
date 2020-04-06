/*

A "const function", denoted with the keyword const after a function declaration,
makes it a compiler error for this class function to change a member variable of the class.
However, reading of a class variables is okay inside of the function,
but writing inside of this function will generate a compiler error.

*/

class CL2
{
public:
    void const_method() const;
    void method();
private:
    int x;
};


int main() {
	const CL2 co;
	CL2 o;

	co.const_method();  // legal
	co.method();        // illegal, can't call regular method on const object
	o.const_method();   // legal, can call const method on a regulard object
	o.method();         // legal
}
