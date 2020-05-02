/* TEST 1 TAGS : TEMPLATE - ITERATOR - DEQUE - STRINGSTREAM */

# include <deque>
# include <iostream>
# include <string>
# include <sstream> /* STRINGSTREAM */

template <typename T>
std::string easyFind(T & x, std::string str) {
	/* Typename est nécessaire dans les templates ! */
	typename T::iterator it = std::find(x.begin(), x.end(), str);
	return *it;
}

int main()
{
	std::stringstream ss;

	std::deque<std::string> dq;
	for (int i = 1; i < 6; i++) {
		ss << "Hello" << "_" << i;
		dq.push_back(ss.str());
		ss.str(""); /* Best way to clear a stringstream */
	}
	dq.erase(dq.begin());
	std::cout << easyFind(dq, "Hello_2") << std::endl;

	/* On peut insert() en se basant sur un itérateur, la fonction insert() renvoie la valeur inséré dans *it */
	std::deque<std::string>::iterator it = dq.begin();
	it = dq.insert(it, "I was inserted ! ");
	std::cout << *it << std::endl;

	/* Exemple de swap */
	std::deque<std::string> dq2;
	dq.swap(dq2);


}
