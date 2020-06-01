# include <string>
# include <iostream>

class Arme
{
    public:
    private:
    	int dmg;
    //L'Arme est un pointeur, l'objet n'est plus contenu dans le Personnage
	// Necessite d'allouer dynamiquement
};

class Personnage
{
    public:
    Arme *m_arme;
	Personnage() : m_arme(0), truc(20), privData(40)
	{
		std::cout << "Constructor" << std::endl;
	    m_arme = new Arme();
	}
	Personnage(Personnage const & source) : m_arme(0)
	{
		std::cout << "Constructor de Copy" << std::endl;
		truc = source.truc;
		m_arme = new Arme();
		privData = source.privData;

	}
	~Personnage() { delete m_arme; }
	int truc;
	private:
		int privData;
    //L'Arme est un pointeur, l'objet n'est plus contenu dans le Personnage
	// Necessite d'allouer dynamiquement
};

// class Personnage
// {
//     public:
//     private:
//     Arme m_arme; // L'Arme est "contenue" dans le Personnage
// };

int main() {
	Personnage bob;
	Personnage jack(bob);
	std::cout << bob.m_arme << std::endl;
	std::cout << jack.m_arme << std::endl;

}
