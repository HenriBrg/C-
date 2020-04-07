#include <iostream>
#include <time.h>
using namespace std;

int main( )
{
   time_t tm = time( NULL ) + 3;
   cout << "Please wait...";
   while ( time( NULL ) < tm )
      ;
   cout << "\nAll done" << endl;
}
