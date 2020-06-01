/*

Pour être capables d'utiliser le symbole « == » entre deux objets, vous devez créer
une fonction ayant précisément pour nom operator==et dotée du prototype :

	bool operator==(Objet const& a, Objet const& b);

Il y a donc 2 références constantes
Même si l'on parle de classe, ceci n'est pas une méthode.
C'est une fonction normale située à l'extérieur de toute classe.
Utiliser une référence permet d'éviter la copie inutile de l'objet et
SURTOUT on a PAS besoin de modifier puisqu'on ne fait que comparer, donc on
utilise const
*/

// Exemple avec class Duree avec attribut heure minute seconde

bool operator==(Duree const& a, Duree const& b)
{
    //Teste si a.m_heure == b.m_heure etc.
    if (a.m_heures == b.m_heures && a.m_minutes == b.m_minutes && a.m_secondes == b.m_secondes)
        return true;
    else
        return false;
}
/*
Comme le veut la règle, ils sont privés et donc inaccessibles depuis l'extérieur de la classe.
Il existe trois solutions à ce problème:

- Vous créez des accesseurs comme on l'a vu (ces fameuses méthodes getHeures(),getMinutes(), …).
  Cela marche bien mais c'est un peu ennuyeux à écrire.

- Vous utilisez le concept d'amitié (friend), que nous verrons dans un prochain chapitre.
- Ou bien vous utilisez la technique suivante

Le problème est que l'opérateur == est situé en-dehors de la classe (Ce n'est pas une méthode)
et ne peut donc accéder aux attributs privés. On créer donc une méthode.

*/

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);     //Teste si a.m_heure == b.m_heure etc.
}

// Qu'on utilise directement ainsi

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

// Mais surtout, qu'on utilisera comme cela :

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 10, 28);

    if (duree1 == duree2)
        cout << "Les durees sont identiques";
    else
        cout << "Les durees sont differentes";

    return 0;
}

// Pour != c'est pareil
// Pour < et >, quasiement pareil : voir https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1897891-surchargez-un-operateur#/id/r-1907560
// Pour << c'est assez spécial
Duree chrono(0, 2, 30);
cout << chrono;
// Sera une erreur : il n'existe pas de fonction operator<<(cout, Duree &duree)

// On peut aussi surcharger l'opérateur = (affectation)
