/*
deque = double ended queue
Tableau auquel on peut ajouter des éléments aux deux extrémités
Le premier élément possède toujours l'indice 0

Fonctions :
	push_front()
	pop_front()
*/

#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> d(4,5); //Une deque de 4 entiers valant 5

    d.push_front(2);   //On ajoute le nombre 2 au début
    d.push_back(8);    //Et le nombre 8 à la fin

    for(int i(0); i<d.size(); ++i)
        cout << d[i] << " ";    //Affiche 2 5 5 5 5 8

    return 0;
}


/*

Autre conteneur : Deque
C'est comme le conteneurs stack
La différence ici est que l'on ne peut accéder qu'au premier élément ajouté
Les priority_queues (autre conteneur) ont des queue qui ordonnent leurs éléments

*/
