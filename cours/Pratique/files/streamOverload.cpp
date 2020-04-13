# include <iostream>

class Test {

	public:
		Test();
		int x;
};

Test::Test(): x(42) {
	std::cout << "Constructor" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Test const & obj) {
	out << obj.x << "via overload de << ";
	return (out);
}

int main() {
	Test myClass;
	std::cout << "Result : " << myClass << std::endl;
}
