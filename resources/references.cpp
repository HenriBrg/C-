/*

Differences références en C++ et pointeur en C++ (très bien expliqué)

	- https://openclassrooms.com/fr/courses/1421911-du-c-au-c/1422263-nouveautes-pour-les-variables

*/

// POINTEUR

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
