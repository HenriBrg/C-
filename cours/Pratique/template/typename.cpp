// https://cpp.developpez.com/faq/cpp/?page=Les-templates#A-quoi-sert-le-mot-cle-typename

/*
Typename permet premièrement de définir un type en tant que paramètre template
*/

template <typename /* ou class */ T>
class MaClasse
{
    ...
};

/*
Le mot-clé typename possède une seconde utilité : il sert à indiquer au compilateur
qu'un identifiant est un type, dans certains contextes manipulant des templates pour
lesquels il ne peut pas le deviner automatiquement.

(Nous utiliserons class ici pour
introduire les paramètres templates type pour éviter la confusion avec la
première utilisation, naturellement typename est aussi possible.)
*/
