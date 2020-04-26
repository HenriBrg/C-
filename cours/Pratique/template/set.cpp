/*
Le conteneur set sert pour des éléments triés et ne se parcourt qu'avec des itérateurs.
La classe set est un conteneur qui stocke des éléments uniques suivants un ordre spécifique
(c’est-à-dire un ensemble ordonné et sans doublons d’éléments)

*/

#include <iostream>
#include <set>
using namespace std;

int main() {

	int desEntiers1[] = {75, 23, 65, 42, 13, 100}; // non ordonné
	int desEntiers2[] = {75, 23, 75, 23, 13}; // non ordonné avec des doublons

	set<int> ensemble1 (desEntiers1, desEntiers1+6); // the range (first,last)
	set<int> ensemble2 (desEntiers2, desEntiers2+5); // the range (first,last)

	cout << "L’ensemble set 1 contient :";

	for (set<int>::iterator it=ensemble1.begin(); it!=ensemble1.end(); ++it) {
	  cout << " " << *it;
	}

	cout << endl;
	cout << "L’ensemble set 2 contient :";

	for (set<int>::iterator it=ensemble2.begin(); it!=ensemble2.end(); ++it) {
	  cout << " " << *it;
	}

	cout << endl;

	cout << "SET EST SANS DOUBLON !" << endl;
	return 0;
}
