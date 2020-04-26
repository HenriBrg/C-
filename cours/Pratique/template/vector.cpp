/*
push_back() ------> Ajout d'un élément à la fin du tableau.
pop_back()  ------> Suppression de la dernière case du tableau.
front()     ------> Accès à la première case du tableau.
back() 	    ------> Accès à la dernière case du tableau.
assign()    ------> Modification du contenu d'un tableau.


*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> vect(5); // un vecteur de 5 entiers
	vect[0] = 1; // accès direct à l’indice 0 pour affecter la valeur 1 vect[1] = 2; // accès direct à l’indice 1 pour affecter la valeur 2

	// augmente et diminue la taille du vector vect.push_back( 6 ); // ajoute l’entier 6 à la fin
	vect.push_back( 7 ); // ajoute l’entier 7 à la fin
	vect.push_back( 8 ); // ajoute l’entier 8 à la fin
	vect.pop_back(); // enleve le dernier élément et supprime l’entier 8
	cout << "Le vecteur vect contient " << vect.size() << " entiers : \n";

	// utilisation d’un indice pour parcourir le vecteur vect
	for(int i=0;i<vect.size();i++)
		cout << "vect[" << i << "] = " << vect[i] << ’\n’;
	cout << ’\n’;
	return 0;
}
