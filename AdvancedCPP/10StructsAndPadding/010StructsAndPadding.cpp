// 10StructsAndPadding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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
	Person p;
	cout << "Size of Person struct = " << sizeof(p) << " bytes"  << endl;
	cout << "Size of Person name = " << sizeof(p.name) << " bytes" << endl;
	cout << "Size of Person age = " << sizeof(p.age) << " bytes" << endl;
	cout << "Size of Person weight = " << sizeof(p.weight) << " bytes" << endl;
	return 0;
}