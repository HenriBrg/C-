/*

Le destructeur ne peut prendre aucun paramètre.
Il y a donc toujours un seul destructeur, il ne peut pas être surchargé.

Un destructeur est une méthode qui commence par un tilde (~) suivi du nom de la classe.

Un destructeur ne renvoie aucune valeur, pas mêmevoid(comme le constructeur).

.hpp : ~Personnage();

Personnage::~Personnage()
{
    Rien à mettre ici si on ne fait pas d'allocation dynamique
    dans la classe Personnage.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet.
}

*/
