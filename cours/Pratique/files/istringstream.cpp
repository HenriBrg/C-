

# include <string>
# include <iostream>
# include <sstream>

using namespace std;

int main() {
	istringstream stream1;
	double num;

	// use it once
	string string1 = "25 1 3.235\n1111111\n222222";
	stream1.str(string1);

	// while( stream1 >> num ) cout << "num: " << num << endl;  // displays numbers, one per line
	cout << (stream1 >> num) << endl;
	cout << (stream1 >> num) << endl;
	cout << (stream1 >> num) << endl;
	cout << (stream1 >> num) << endl;
	cout << (stream1 >> num) << endl;
	cout << (stream1 >> num) << endl;
	cout << (stream1 >> num) << endl;

	// use the same string stream again with clear() and str()
	string string2 = "nan+inf 43 45.324 42.03 22";
	stream1.clear();
	stream1.str(string2);

	while( stream1 >> num )
		cout << "num: " << num << endl;  // displays numbers, one per line

}
