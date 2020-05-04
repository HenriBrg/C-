# include <complex>
# include <iostream>
# include <valarray>
# include <cmath>
using namespace std;

int main()
{
	/* Il faut spécifier le type des nombres à utiliser pour représenter la
	partie réelle et la partie imaginaire des nombres complexes */
    complex<double> z(12,5);
    cout << "Le double 1 avec 5 chiffres après la virgule : " << z << endl;
	cout << sqrt(z) << endl;

	int x = 45;
	cout << "Angle 90 en radian = 90 * PI/180 = " << (90 * M_PI/180) << endl;
	cout << "Cosinus 45 : " << cos(x) << endl;

	cout << "La grande force des valarrayest la possibilité d'effectuer des opérations mathématiques directement avec l'ensemble du tableau" << endl;
	valarray<int> a(10, 5);  //5 éléments valant 10
	valarray<int> b(8, 5);   //5 éléments valant 8
	valarray<int> c = a + b;  //Chaque élément de c vaut 18

	cout << "Le nouveau valarray à 18 " << c[0] << endl;
	valarray<int> d(8, 5);   //5 éléments valant 8
	cout << "Opérateur = surchargé compare chaque valeur du valarray b et d et retourne un booléen : " << (d == b)[1] << endl;


	return 0;
}
