// https://www.learncpp.com/cpp-tutorial/6-11a-references-and-const/

// ----------------> A const variable must be assigned a value at the time of its declaration.

int main() {
	int x = 5;
	const int &ref1 = x; // okay, x is a non-const left-value

	const int y = 7;
	const int &ref2 = y; // okay, y is a const left-value

	const int &ref3 = 6; // okay, 6 is an right-value

	// -------------------------------------------------------------------------

	int value = 5;
	const int &ref = value; // create const reference to variable value

	value = 6; // okay, value is non-const
	ref = 7; // ILLEGAL -- ref is const as mentionned below :
	// When accessed through a reference to a const value, the value is considered const even if the original variable is not:

	// To avoid making unnecessary, potentially expensive copies, variables that are
	// not pointers or fundamental data types (int, double, etc…) should be generally
	// passed by (const) reference. Fundamental data types should be passed by value, unless the function needs to change them.
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------

// A const reference parameter allows you to pass in a non-const l-value argument,
// a const l-value argument, a literal, or the result of an expression, like that :

void printIt(const int &x)
{
    std::cout << x;
}

int main()
{
    int a = 1;
    printIt(a); // non-const l-value

    const int b = 2;
    printIt(b); // const l-value

    printIt(3); // literal r-value

    printIt(2+b); // expression r-value

    return 0;
}

// If we make a pointer const, we cannot change the pointer.
// This means that the pointer will always point to the same address but we can change the value of that address.
