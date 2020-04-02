# include <iostream>

int main(void)
{
	int *ptr;

	ptr = 0;
	ptr = new int;
	*ptr = 5;
	std::cout << *ptr << std::endl;
	delete ptr;
	ptr = 0;
    return (0);
}
