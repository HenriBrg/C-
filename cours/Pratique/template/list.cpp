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
