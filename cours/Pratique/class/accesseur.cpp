/*

L'un des aspects les plus essentiels du concept « orienté objet » est l'encapsulation,
qui consiste à définir des étiquettes pour les données membres et les fonctions membres afin
de préciser si celles-ci sont accessibles à partir d'autres classes ou non...

De cette manière, des données membres portant l'étiquette private ne peuvent pas être manipulées
directement par les fonctions membres des autres classes.

Ainsi, pour pouvoir manipuler ces données membres, le créateur de la classe (vous en l'occurrence)
doit prévoir des fonctions membres spéciales portant l'étiquette public, permettant de manipuler ces données.

Les fonctions membres permettant d'accéder aux données membres sont appelées accesseurs, parfois getter
Les fonctions membres permettant de modifier les données membres sont appelées mutateurs, parfois setter

Un accesseur
- doit avoir comme type de retour le type de la variable à renvoyer
- ne doit pas nécessairement posséder d'arguments
- prefixé de get (convention)

Un mutateur
- doit avoir comme paramètre la valeur à assigner à la donnée membre. Le paramètre doit donc être du type de la donnée membre
- ne doit pas nécessairement renvoyer de valeur (il possède dans sa plus simple expression le type void)
- prefixé de set (convention)

*/
