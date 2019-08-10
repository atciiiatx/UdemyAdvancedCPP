// 11BinaryFileIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

const int MaxChars = 50;

#pragma pack(push, 1)
struct Person
{
	char name[MaxChars];
	int age;
	double weight;
};
#pragma pack(pop)

int main()
{
	Person p =
	{
		"John Smith",
		30,
		175.25
	};
	cout << "Size of Person struct = " << sizeof(p) << " bytes" << endl;
	cout << "Size of Person name = " << sizeof(p.name) << " bytes" << endl;
	cout << "Size of Person age = " << sizeof(p.age) << " bytes" << endl;
	cout << "Size of Person weight = " << sizeof(p.weight) << " bytes" << endl;

	string fileName = "test.bin";
	ofstream outFile;
	outFile.open(fileName, ios::binary);
	if (outFile.is_open())
	{
		outFile.write(reinterpret_cast<const char*>(&p), sizeof(p));
		outFile.close();
		cout << "Wrote file " << fileName << endl;
	}
	else
	{
		cout << "Could not create " << fileName << endl;
	}

	ifstream inFile;
	inFile.open(fileName, ios::binary);
	if (inFile.is_open())
	{
		Person q;
		inFile.read(reinterpret_cast<char*>(&q), sizeof(q));
		inFile.close();
		cout << "Data Read:" << endl;
		cout << "Name: " << q.name << endl;
		cout << "Age: " << q.age << endl;
		cout << "Weight: " << q.weight << endl;
	}
	else
	{
		cout << "Could not open " << fileName << endl;
	}
	return 0;
}