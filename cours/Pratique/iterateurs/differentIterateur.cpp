/*

Il existe en réalité cinq sortes d'itérateurs.
Lorsque l'on déclare unvector::iterator ou un map::iterator, on déclare en réalité un objet d'une de ces cinq catégories.
Cela intervient via une redéfinition de type, chose que nous verrons dans la cinquième partie de ce cours.
Parmi les cinq types d'itérateurs, seuls deux sont utilisés pour les conteneurs :
	les bidirectional iterators
	les random access iterators

*/


/*
Les bidirectional iterators

Ce sont des itérateurs qui permettent d'avancer et de reculer sur le conteneur.
Cela veut dire que vous pouvez utiliser aussi bien++que--.
L'important étant que l'on ne peut avancer que d'un seul élément à la fois.
Donc pour accéder au sixième élément d'un conteneur, il faut partir de la
position begin()puis appeler cinq fois l'opérateur++.

*/

/*
Les random access iterators
Ces itérateurs proposent en plus de ++ et -- des opérateurs + et - permettant d'avancer de plusieurs éléments d'un coup.
Par exemple pour accéder au huitième élément d'unvector, on peut utiliser la syntaxe suivante :

vector<int> tab(100,2);  //Un tableau de 100 entiers valant 2
vector<int>::iterator it = tab.begin() + 7; //Un itérateur sur le 8ème élément
*/

/* Pour les conteneurs map ou list, on ne peut pas itérer car liste chainées, mais les itérateurs le savent et fonctionnent quand meme */

#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> liste;       //Une liste d'entiers
    liste.push_back(5);    //On ajoute un entier dans la liste
    liste.push_back(8);    //Et un deuxième
    liste.push_back(7);    //Et encore un !

    //On itère sur la liste
    for(list<int>::iterator it = liste.begin(); it!=liste.end(); ++it)
    {
        cout << *it << endl;
    }
    return 0;
}
