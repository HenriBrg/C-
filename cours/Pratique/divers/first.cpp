// Iteration

int main() {
	// Méthode 1
	sizeof(tableau) = sizeof(élément) * nombre d'éléments
	Adresse_n = Adresse_Base + n*taille(élément)
	// Méthode 2
	x = true;
	while (x)
	{
		/* code ... */
		if (...)
			x = false;
	}
	// Méthode 3 ...
}

// -----------------------------------------------------------------------------

// Fonction inline (équivalent des macro)
// le code d'une fonction inline est remplacé lors de son appel

inline int carre(int nombre);

int main()
{
    cout << carre(10) << endl; // après compilation, carre(10) sera remplacé par 10 * 10

    return 0;
}

inline int carre(int nombre)
{
    return nombre * nombre;
}
