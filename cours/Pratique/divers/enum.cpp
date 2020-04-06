#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}

// ENUM permettent d'optimiser le code
// Très utile si besoin de flags

#include <iostream>
using namespace std;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

// ITALICS = 00000001
// BOLD = 00000010
// UNDERLINE = 00000100

int main()
{
    int myDesign = BOLD | UNDERLINE;

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

    cout << myDesign;
	if (myDesign & ITALICS) {
	    // code for italics
	}
    return 0;
}
