//============================================================================
// Name        : asciiTest.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("/home/gomez/Documents/asciiTest.txt", ios_base::out);
    for(int i = 0; i <= 255; i++)
        file << i << "\t" ;
    file.close();
    cout << "success" << endl;
    return 0;
}
