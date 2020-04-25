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

Dans une map, les objets stockés sont en réalité despair.
Pour chaque paire, l'attributfirstcorrespond à la clé alors quesecondest la valeur.
Je vous ai dit au chapitre précédent que lesmaptriaient leurs éléments selon leurs clés.
Nous allons maintenant pouvoir le vérifier facilement.

Lamaputilise l'opérateur<de la classestringpour trier ses éléments, ce comportement est modifiable
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, double> poids; //Une table qui associe le nom d'un animal à son poids

    //On ajoute les poids de quelques animaux
    poids["souris"] = 0.05;
    poids["tigre"] = 200;
    poids["chat"] = 3;
    poids["elephant"] = 10000;

    //Et on parcourt la table en affichant le nom et le poids
    for(map<string, double>::iterator it=poids.begin(); it!=poids.end(); ++it)
    {
        cout << it->first << " pese " << it->second << " kg." << endl;
    }
    return 0;
}

// chat pese 3 kg.
// elephant pese 10000 kg.
// souris pese 0.05 kg.
// tigre pese 200 kg.

/*

La structure interne desmapest encore plus compliquée que celle deslist.
Elles utilisent ce qu'on appelle des arbres binaires et se déplacer dans un tel
arbre peut vite devenir un vrai casse-tête. Grâce aux itérateurs,
ce n'est pas à vous de vous préoccuper de tout cela.
Vous utilisez simplement les opérateurs++et--et l'itérateur saute d'élément en élément.

*/

/*
L'opérateur [] permet d'accéder à un élément donné mais il a un « défaut ».
Si l'élément n'existe pas, l'opérateur[]le crée. On ne peut pas l'utiliser pour savoir
si un élément donné est déjà présent dans la table ou pas.

C'est pour palier ce problème que lesmapproposent une méthode find() qui renvoie un itérateur
sur l'élément recherché. Si l'élément n'existe pas, elle renvoie simplementend()
*/

int main()
{
    map<string, double> poids; //Une table qui associe le nom d'un animal à son poids

    //On ajoute les poids de quelques animaux
    poids["souris"] = 0.05;
    poids["tigre"] = 200;
    poids["chat"] = 3;
    poids["elephant"] = 10000;

    map<string, double>::iterator trouve = poids.find("chien");

    if(trouve == poids.end())
    {
        cout << "Le poids du chien n'est pas dans la table" << endl;
    }
    else
    {
        cout << "Le chien pese " << trouve->second << " kg." << endl;
    }
    return 0;
}
