/*

Une déclaration typedef introduit un nom qui, dans sa portée, devient un
synonyme du type donné par la partie de déclaration de type de la déclaration.

Vous pouvez utiliser des déclarations typedef pour construire des noms plus courts ou plus
explicites pour des types déjà définis par le langage ou pour des types que vous avez déclarés.

<-- !!! --> Contrairement aux déclarations de classe, de struct, d' Unionet d' enum , les déclarations
<-- !!! --> typedef n’introduisent pas de nouveaux types, elles introduisent de nouveaux noms pour les types existants.

typedef est souvent combiné avec struct pour déclarer et nommer les types définis par l’utilisateur

Vous pouvez utiliser typedef pour déclarer un nom à utiliser comme synonyme d’un type précédemment déclaré
Exemple : typedef std::ios_base::fmtflags fmtfl

*/

typedef unsigned long UL;   // Declare a typedef name, UL.
int UL;
