/*

Differences références en C++ et pointeur en C++ (très bien expliqué)

	- https://openclassrooms.com/fr/courses/1421911-du-c-au-c/1422263-nouveautes-pour-les-variables

*/

// POINTEUR
// You cannot have NULL references.
// You must always be able to assume that a reference is connected to a legitimate piece of storage.

// Once a reference is initialized to an object, it cannot be changed to refer to another object
// whereas Pointers can be pointed to another object at any time.

// Il est recommandé, pour des raisons de performances, de passer par référence tous
// les paramètres dont la copie peut prendre beaucoup de temps

// (en pratique, seuls les types de base du langage pourront être passés par valeur).

// Bien entendu, il faut utiliser des références constantes au maximum afin d'éviter
// les modifications accidentelles des variables de la fonction appelante dans la fonction appelée.

// En revanche, les paramètres de retour des fonctions ne devront pas être
// déclarés comme des références constantes, car on ne pourrait pas les écrire si c'était le cas.

int main()
{
    Coordonnees point;

    remiseAZero(&point);

    return 0;
}

void remiseAZero(Coordonnees *pointAModifier)
{
    pointAModifier->x = 0;
    pointAModifier->y = 0;
}


// REFERENCE

int main()
{
    Coordonnees point;

    remiseAZero(point);

    return 0;
}

void remiseAZero(Coordonnees &pointAModifier)
{
    pointAModifier.x = 0;
    pointAModifier.y = 0;
}
