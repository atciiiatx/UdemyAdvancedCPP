// 08ReadingTextFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream inFile;
	string inFileName = "textIn.txt";
	inFile.open(inFileName);
	if (inFile.is_open())
	{
		cout << "Reading file " << inFileName << endl;
		string line;
		while (getline(inFile, line))
		{
			cout << line << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Can't open file " << inFileName << endl;
	}
}
