//============================================================================
// Name        : asciiTest.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

 //   ofstream: Stream class to write on files
 //   ifstream: Stream class to read from files
 //   fstream: Stream class to both read and write from/to files.


using namespace std;

char filename[50];

int main() {

	fstream file;
	cout << "Enter file name to open ::" << endl;
	cout << "(Write the full path or otherwise it will be created on the current workspace) " << endl;
	cin.getline(filename, 36);

	file.open(filename, ios_base::out);
	for (int i = 0; i <= 255; i++)
		file << i << "\t";
	file.close();
	cout << "success" << endl;
	return 0;
}

