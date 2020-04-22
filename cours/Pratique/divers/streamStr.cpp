# include <iostream>
# include <string>
# include <sstream>

int main(int ac, char const **av) {
	std::stringstream s; // Via <sstream>
	s << 100;
	std::cout << s.str() << std::endl;
	int i;
	s >> i;
	std::cout << i << std::endl;
	return 0;
}

// Pas mal !
