/*
There are types and functions in the library iostream.h that are used for standard I/O.

- fstream.h includes the definitions for stream classes ifstream (for input from a file)
- ofstream (for output to a file) and fstream (for input to and output from a file).

ifstream inFile;  // object for reading from a file
ofstream outFile; // object for writing to a file

*/

#include <iostream> // cout cin cerr
#include <fstream> // file stream
#include <string>

#include <sstream> // string stream

int main()
{
	std::string		line;
	std::ifstream	fromFile;
	std::ofstream	toFile;

	// Error handling
	// int x;
	// if ( cin >> x )
	//         cout << "Please enter a valid number" << endl;

	// OR on the heap
	// ifstream* pmyFile = new ifstream; // On the heap
	// pmyFile->open("filename");

	fromFile.open("inputFileTest", std::ios::in);
	toFile.open("outputFileTest", std::ios::out); // std::ios::app to append at the end / ::trunc

	if (fromFile.good() == 0 || toFile.good() == 0)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	double d; // On peut mettre le type qu'on veut, std::string, int ...
	std::stringstream strstream("Hello 42");
	strstream.seekg(-4, std::ios::end);
	strstream >> d;
	int a(42);
	std::cout << std::setw(5) << std::setbase(16) << a << std::endl;
	std::cout << std::setfill('0') << std::setw(5) << std::setbase(16) << a << std::endl;


	/*
	std::string a("Hello");
	std::string b("World");
	std::cout << a + b + '\n';
	*/

	/*
	toFile << fromFile.rdbuf(); // THIS is equal to the while below

	while (std::getline(fromFile, line))
	{
		toFile << line;
		std::cout << "Inserting that line into the output file : " << line << std::endl;
		if (fromFile.eof() == 0)
			toFile << std::endl;
	}
	*/
	fromFile.close();
	toFile.close();
}
