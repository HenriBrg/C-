/*

insert() : ajouter un élément au milieu d'un conteneur
erase()  : supprimer un élément au milieu d'un conteneur
Il faut indiquer où l'on souhaite insérer l'élément. Et cela, c'est justement le but d'un itérateur.

L'opérateur[] permet d'accéder à un élément donné mais il a un « défaut ».
Si l'élément n'existe pas, l'opérateur[]le crée
C'est pour palier ce problème que lesmapproposent une méthode find() qui renvoie un itérateur sur l'élément recherché.
Si l'élément n'existe pas, elle renvoie simplementend()
*/

#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<string> tab;    //Un tableau de mots

    tab.push_back("les"); //On ajoute deux mots dans le tableau
    tab.push_back("Zeros");

    tab.insert(tab.begin(), "Salut"); //On insère le mot "Salut" au début

    //Affiche les mots donc la chaîne "Salut les Zeros"
    for(vector<string>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        cout << *it << " ";
    }

    tab.erase(tab.begin()); //On supprime le premier mot

    //Affiche les mots donc la chaîne "les Zeros"
    for(vector<string>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}

/* Souvenez-vous quand même que les vector ne sont pas optimisés pour l'insertion et la suppression au milieu.  ---> VOIR IMAGE dans dossier containers/ */
