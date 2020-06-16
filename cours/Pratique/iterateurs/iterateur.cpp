
// LIRE DOSSIER CONTAINERS AVANT !


/*

Les itérateurs sont des objets ressemblant aux pointeurs, qui vont nous
permettre de parcourir les conteneurs. L'intérêt de ces objets est qu'on les
utilise de la même manière quel que soit le conteneur !

Pas besoin de faire de distinction entre les vector, les map ou les list

Les iterateurs sont des pointeurs spéciaux pour se déplacer dans les conteneurs comme
le ferait un pointeur dans la mémoire.

Tous les conteneurs possèdent une méthode begin() renvoyant un itérateur sur le premier élément contenu.
On avance alors dans le conteneur en utilisant l'opérateur ++
On ne veut pas aller en dehors du conteneur. Pour éviter cela, les conteneurs
possèdent une méthode end() renvoyant un itérateur sur la fin du conteneur.
*/

								////////////
/*


Chaque conteneur possède son propre type d'itérateur mais la manière de les déclarer est toujours la même.
Comme toujours, il faut un type et un nom.
Il faut indiquer le type du conteneur, suivi de l'opérateur :: et du mot iterator.
Par exemple, pour un itérateur sur un vector d'entiers, on a :

*/

#include <vector>
using namespace std;

vector<int> tableau(5,4);     //Un tableau de 5 entiers valant 4
vector<int>::iterator it;     //Un itérateur sur un vector d'entiers

/* Autres exemples */

map<string, int>::iterator it1; //Un itérateur sur les tables associatives string-int
deque<char>::iterator it2; 		//Un itérateur sur une deque de caractères
list<double>::iterator it3; 	//Un itérateur sur une liste de nombres à virgule


								////////////

/*
Pour les vector et les deque, cela peut vous sembler inutile : on peut faire aussi bien avec les crochets[].
Mais pour les map et surtout les list, ce n'est pas vrai :
les itérateurs sont le seul moyen que nous avons de les parcourir.
*/

#include<deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> d(5,6);        //Une deque de 5 éléments valant 6
    deque<int>::iterator it;  //Un itérateur sur une deque d'entiers

    //Et on itère sur la deque
    for(it = d.begin(); it!=d.end(); ++it)
    {
        cout << *it << endl;    //On accède à l'élément pointé via l'étoile
    }
    return 0;
}


// TOUTES LES FONCTIONS ITERATEURS : http://www.cplusplus.com/reference/iterator/
