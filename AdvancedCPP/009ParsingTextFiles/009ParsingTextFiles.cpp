// 09ParsingTextFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream inFile;
	string inFileName = "stats.txt";
	inFile.open(inFileName);
	if (inFile.is_open())
	{
		cout << "Parsing file " << inFileName << endl;
		string line;
		while (inFile)
		{
			getline(inFile, line, ':');
			int population;
			inFile >> population;
		
			inFile >> ws;
			if (!inFile)
			{
				break;
			}

			cout << line << " -- " << population << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Can't open file " << inFileName << endl;
		return 1;
	}
	return 0;
}
