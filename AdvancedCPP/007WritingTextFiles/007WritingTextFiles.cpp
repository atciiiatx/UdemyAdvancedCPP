#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFile;
	string outFileName = "text.txt";
	outFile.open(outFileName);
	if (outFile.is_open())
	{
		cout << "Writing file " << outFileName << endl;
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else
	{
		cout << "Can't create file " << outFileName << endl;
	}
}