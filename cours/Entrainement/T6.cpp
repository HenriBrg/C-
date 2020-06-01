# include <iostream>
# include <algorithm>
# include <string>

using namespace std;


/* TAGS : STRING - SL (standard library) */
class Convertir {
	public:
		char operator()(char c) const {
			return toupper(c);
		}
};

int main() {

	string s("Hello World");
	string::iterator it = s.begin(); /* On stock le premier char */
	for (string::iterator x = s.begin(); x != s.end(); x++)
		cout << *x;
	cout << endl;

	for (string::iterator x = s.begin(); x != s.end(); x++)
		transform(s.begin(), s.end(), s.begin(), Convertir());
	it = s.begin();
	for (string::iterator x = s.begin(); x != s.end(); x++)
		cout << *x;
	cout << endl;

	/* Itérateur sur tableau pour pouvoir utiliser les algorithmes */
	
	int const taille(10);
    double tableau[taille];
	for (int i = 0; i < taille; i++)
		*(tableau + i) = 20 - i;
    double* debut(tableau);
    double* fin(tableau+taille);

	for (int i = 0; i < taille; i++)
		cout << *(tableau + i) << " ";
	cout << endl;
    sort(debut, fin);
	for (int i = 0; i < taille; i++)
		cout << *(tableau + i) << " ";
	cout << endl;
}
