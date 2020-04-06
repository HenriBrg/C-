/*
Hors des fonctions membres, le C++ est pareil que le C, donc RAS

http://sdz.tdct.org/sdz/c-les-pointeurs-sur-fonctions.html

*/

class A{
    public:
       int fonction(int a);
    //...
};

int A::fonction(int a){return a*a;}

int main()
{
   int (A::*ptr)(int) = &A::fonction;  //On déclare un pointeur sur la fonction membre

   A instance;  //On crée une instance de la classe A

   int resultat = (instance.*ptr)(2);
   //On calcule le résultat de la fonction pointée par "ptr" appliquée à
   //l'objet "instance" avec comme argument "2"

   cout<< resultat  << endl;
   //Et on affiche.

   return 0;
}
