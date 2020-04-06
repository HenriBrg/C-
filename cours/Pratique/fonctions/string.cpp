# include <string>

int main() {

	std::string str("Hello");

	str.length();
	str.empty();
	str.size();
	str.resize(str.size() + 5, "World");
	str.clear();
	str.at(0); // Char at str[0]
	str.compare(str, "Bybye");
	str.find("l"); // Find the first occurence of 'l'
	str.substr(3); // all chars after the third one
	str.substr(3, 7); // 7 char from the third one
}
