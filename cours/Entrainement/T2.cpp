/* TEST 2 TAGS : FONCTEUR */


#include <iostream>
#include <vector>

using namespace std;

class Addition {
	public: /* Surcharge de l'opérateur () */
	    int operator()(int a, int b) {
	        return a+b;
	    }
};

class Remplir {
	public:
	    Remplir(int i) :m_valeur(i) {}
	    int operator()() {
	        ++m_valeur;
	        return m_valeur;
	    }
		int getM() {return m_valeur;}
	private:
	    int m_valeur;
};

int main()
{
	/* FONCTEUR ADDITION */

	Addition foncteur;
    int a(2), b(3);
    cout << a << " + " << b << " = " << foncteur(a,b) << endl; //On utilise le foncteur comme s'il s'agissait d'une fonction

	/* FONCTEUR REMPLIR */
	/* Un tableau de 100 cases valant toutes 0 */
	vector<int> tab(100,0);
	Remplir f(0);
	for (vector<int>::iterator it=tab.begin(); it!=tab.end(); ++it) {
		/* On appelle simplement le foncteur sur chacun des éléments du tableau */
		*it = f();
	}
	std::cout << "MVALUE = " << f.getM() << std::endl;
}
