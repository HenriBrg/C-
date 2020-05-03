#include <iostream>
#include <fstream>
#include <iterator>
using namespace std;

/* https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1903478-utilisez-les-iterateurs-sur-les-flux

3 notions vues ici qui VRAIMENT ULTRA UTILE !

TAGS : Iterateur sur stream - Peut être utile pour parser un fichier
	   Algorithme COPY() avec itérateur sur i/o stream

*/

#include <algorithm>
#include <vector>

/*	NE FONCTIONNE PAS CAR IL FAUT SURCHARGER donc passer par une classe
	void putVec(double x) {cout << x << endl;}
*/

class PutVec {
	public:
		void operator()(double x) {cout << x << endl;}
};

int main()
{
	/* Iterateur sur un flux sortant */
    ostream_iterator<double> it(cout, ", ");
    *it = 3.14;
    *it = 2.71;
	/* Output - sans qu'il y ait besoin d'ajouter quoi que ce soit !
	3.14, 2.71,
	*/

	cout << endl << endl;

	/* Iterateur sur un flux sortant */
	ifstream file("T5.txt");
	istream_iterator<double> it2(file);

	double a, b;
	a = *it2;
	cout << endl << a << endl;
	++it2;
	b = *it2;
	cout << b << endl;
	cout << *++it2 << endl;
	cout << endl << endl;

	/* Comment stocker tout un fichier dans, par exemple, un vector */
	vector<double> tab(10,7.77);
	ifstream file2("T5.txt");
	istream_iterator<double> it3(file2);
	istream_iterator<double> fin;
	copy(it3, fin, tab.begin());
	for_each(tab.begin(), tab.end(), PutVec());
    return 0;
}
