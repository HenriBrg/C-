# include <iostream>
# include <cstdlib> /* pour rand */
# include <ctime>   /* pour time */
# include <vector>
# include <algorithm>


/* TAGS : Test du header <algorithm> avec les fonctions proposées */

/*

	- GENERATE

Le plus simple des algorithmes s'appelle : GENERATE()
Il appelle un foncteur sur tous les éléments situés entre deux itérateurs.
Grâce à cet algorithme, notre code de remplissage de tableau devient beaucoup plus court

	- COUNT

Pour compter le nombre d'éléments égaux à une valeur donnée, on utilise l'algorithme COUNT
Pour compter le nombre d'éléments égaux au nombre 2, c'est très simple : int nombre = count(tab.begin(), tab.end(), 2);

	- SORT

On peut aussi trier : sort(tab.begin(), tab.end());
Par défaut, la fonction sort()utilise l'opérateur < pour comparer les éléments avant de les trier.
Mais il existe également une autre version de cette fonction qui prend un
troisième argument : un foncteur comparant deux éléments

	- FOR_EACH

Itère sur chaque élément, en appelant la fonction passée en paramètre

	- TRANSFORM : check sur le web
*/

using namespace	std;

/* Fonction passée à l'algorithme generate() */
class Generer {
	public:
	    int operator()() const {
	        return rand() % 10;
	    }
};

/* Fonction passée à l'algorithme sort() qui définit comment on va trier */
class ComparaisonLongueur
{
public:
    bool operator()(const string& a, const string& b)
    {
        return a.length() < b.length();
    }
};

class PrintVec {
	public:
		void operator()(string s) {
			cout << s << endl;
		}
};

int main()
{
	/* GENERATE et COUNT */
    srand(time(0));
    vector<int> tab(100,-1); /* Un tableau de 100 cases */
    generate(tab.begin(), tab.end(), Generer());  /* On génère les nombres aléatoires */
    int const compteur = count(tab.begin(), tab.end(), 5); //Et on compte les occurrences du 5
    cout << "L'algorithme count indique qu'il y a " << compteur << " elements valant 5." << endl << endl;;

	/* SORT */
	/* BTW : initialisation d'un tableau de string de manière efficace */
	/* On remplit le tableau en lisant un fichier par exemple. */
	const char *vecInit[] = {"CCC", "A", "EEEEE", "BB", "DDDD"};
	vector<string> vec(vecInit, vecInit + 5);
	cout << "Non trié par longueur : " << endl;
	for_each(vec.begin(), vec.end(), PrintVec());
	sort(vec.begin(), vec.end(), ComparaisonLongueur());
	cout << "Trié par longueur grâce à sort() : " << endl;
	for_each(vec.begin(), vec.end(), PrintVec());
    return 0;
}
