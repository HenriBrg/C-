/*

Les tables associatives sont des structures de données qui autorisent l'emploi
de n'importe quel type comme index.

En termes techniques, on dit qu'une mapest une table associative permettant
de stocker des paires clé-valeur.

Concrètement, cela veut dire que vous pouvez créer un conteneur où, par exemple,
les indices sont des string. Comme le type des indices peut varier,
il faut l'indiquer lors de la déclaration de l'objet

*/


/* MAP


map<string, int> a;

Ce code déclare une table associative qui stocke des entiers mais dont les indices sont des chaînes de caractères
On peut accéder à un élément via les crochets[]comme ceci :
	a["salut"] = 3; //La case "salut" de la map vaut maintenant 3
Si la case n'existe pas, elle est automatiquement créée.
La seule condition est que l'objet utilisé possède un opérateur de comparaison <

*/

#include <map>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fichier("texte.txt");
    string mot;
    map<string, int> occurrences;
    while(fichier >> mot)   //On lit le fichier mot par mot
    {
         ++occurrences[mot]; //On incrémente le compteur pour le mot lu
    }
    cout << "Le mot 'banane' existe " << occurrences["banane"] << " fois dans le fichier" << endl;
    return 0;
}

/*

Les sets ont utilisés pour représenter les ensembles.
On peut insérer des objets dans l'ensemble et y accéder via une méthode de recherche.
Par contre, il n'est pas possible d'y accéder via les crochets.
En fait, c'est comme si on avait unemapoù les clés et les éléments étaient confondus.
Les multiset et multimap sont des copies des set et map où chaque clé peut exister en plusieurs exemplaires.
*/
