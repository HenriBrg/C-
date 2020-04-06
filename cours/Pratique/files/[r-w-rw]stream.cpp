/*

PLAN :

1) fstream
2) ifstream
3) ofstream

https://fr.wikibooks.org/wiki/Programmation_C%2B%2B/Les_entrées-sorties

Les entrées et sorties sont gérées par deux classes définies dans le fichier d'en-tête <iostream> :

ostream (Output stream) permet d'écrire des données vers la console, un fichier, ... Cette classe surdéfinit l'opérateur <<.
istream (Input stream) permet de lire des données à partir de la console, d'un fichier, ... Cette classe surdéfinit l'opérateur >>.

cout écrit vers la sortie standard,
cerr écrit vers la sortie d'erreur,
clog écrit vers la sortie technique,
cin lit à partir de l'entrée standard (jusqu'au premier espace exclu, éventuellement).
- (Demander un nombre et y entrer des lettres provoque une erreur.)
getline lit à partir de l'entrée standard (tout).

Les instances des classes dérivées des classes istream et ostream sont également manipulés avec les opérateurs << et >>.
Cependant, il ne faut pas oublier de les fermer en appelant la méthode close().

Note: Les noms de fichiers sont codés sur 8 bits sous Linux/Unix et sur 16 bits sur Windows, ce qui peut induire des problèmes de portabilité, le cas échéant.

*/

/* 1)

La classe fstream dérive de la classe iostream permettant à la fois la lecture et l'écriture.
Cette dernière (iostream) dérive donc à la fois de la classe ostream et de la classe istream.
Son constructeur a la syntaxe suivante :
	- fstream(const char* filename, openmode mode=in|out)

*/

/* 2)

La classe ifstream permet de lire à partir d'un fichier. Le constructeur a la syntaxe suivante :
	- ifstream(const char* filename, openmode mode=in)

Le paramètre mode peut être une combinaison des valeurs suivantes :
	app
	(append) Placer le curseur à la fin du fichier avant écriture.
	ate
	(at end) Placer le curseur à la fin du fichier.
	binary
	Ouvrir en mode binaire plutôt que texte.
	in
	Autoriser la lecture.
	out
	Autoriser l'écriture.
	trunc
	(truncate) Tronquer le fichier à une taille nulle.
*/

int main()
{
	// Lire un entier depuis un fichier
	ifstream fichier("test.txt");
	int a;
	fichier >> a;
	cout << "A = " << a;
	fichier.close();

	// Afficher tous les caractères d'un fichier
	ifstream fichier("test.txt");
	while (fichier.good())
	    cout << (char) fichier.get();
	fichier.close();

}

/* 3)

La classe ofstream permet d'écrire vers un fichier. Son constructeur a une syntaxe similaire :

	- ofstream(const char* filename, openmode mode=out|trunc)

*/

int main()
{
	ofstream fichier("test.txt");
	fichier << setw(10) << a << endl;
	fichier.close();

}
