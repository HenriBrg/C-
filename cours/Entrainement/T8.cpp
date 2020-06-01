#include <iostream>
#include <iomanip>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string,unsigned int> nbJoursMois;
	nbJoursMois["janvier"] = 31;
	nbJoursMois["février"] = 28;
	nbJoursMois["mars"] = 31;
	nbJoursMois["avril"] = 30;
	//...
	cout << "La map contient " << nbJoursMois.size() << " elements : \n";
	for (map<string,unsigned int>::iterator it=nbJoursMois.begin(); it!=nbJoursMois.end(); ++it) {
	  cout << it->first << " -> \t" << it->second << endl;
	}
	cout << "Nombre de jours du mois de janvier : " << nbJoursMois.find("janvier")->second << '\n';
	cout << "Janvier : \n" ;
	for (int i=1; i <= nbJoursMois["janvier"]; i++) {
		if (i%7 == 0)
			cout << setw(3) << i;
	}
	cout << endl;
	cout << endl;
	return 0;
}
