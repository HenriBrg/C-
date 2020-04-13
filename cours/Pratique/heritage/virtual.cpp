/*

L'héritage virtuel demande au compilateur de fusionner les champs membres d'une classe mère en cas d'héritage en diamant.

class A:...
class B:virtual A ...
class C:virtual A ...
class D : B, .. C ...

Sans cette technique, vous auriez deux objets grand-mère A complètement différent dans la classe fille D.

Une particularité du C++ impose que toute classe possédant au moins une méthode virtuelle doit également avoir un destructeur virtuel.

*/
