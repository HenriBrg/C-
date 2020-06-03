#include <stack>
#include <iostream>
#include <typeinfo>

// Scope avec le ::
// VALUE_TYPE / CONTAINER_TYPE / SIZE_TYPE

int count = 0;

int main( )
{

	int count = 0;
    ::count = 1;  // set global count to 1
    count = 2;    // set local count to 2

	// ---------> VALUE_TYPE

	// Declares stacks with default deque base container
	std::stack<int>::value_type AnInt;
	AnInt = 69;
	std::cout << "The value_type is AnInt = " << AnInt << std::endl;
	std::stack<int> s1;
	s1.push( AnInt );
	std::cout << "The element at the top of the stack is " << s1.top( ) << "." << std::endl;

	// ---------> CONTAINER_TYPE

	std::stack<int>::container_type s;
	s.push_front(10); // s = deque car sous-jacent de stack
	std::cout << typeid(s).name() << std::endl;

	// ---------> SIZE_TYPE

	std::stack <int> s2;
	std::stack <int>::size_type i;

	s2.push( 1 );
	i = s2.size( );
	std::cout << "The stack length is " << i << "." << std::endl;

	// ---------> ::C
	std::stack<int> si;

}
