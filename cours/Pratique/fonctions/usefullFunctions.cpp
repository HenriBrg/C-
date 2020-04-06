/*
https://www.geeksforgeeks.org/ios-good-function-in-c-with-examples/
The good() method of ios class in C++ is used to check if the stream is good enough to work.
It means that this function will check if this stream has raised any error or not.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Stream
    stringstream ss;

    // Using good() function
    bool isGood = ss.good();

    // print result
    cout << "is stream good: "
         << isGood << endl;

    return 0;
}


/*

fonction seekg()

http://www.cplusplus.com/reference/istream/istream/seekg/

Sets the position of the next character to be extracted from the input stream.
*/
