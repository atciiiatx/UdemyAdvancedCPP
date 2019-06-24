// 04StandardExceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		throw runtime_error("Contructor exception");
	}
};

int main()
{
	try
	{
		CanGoWrong wrong;
	}
	catch (runtime_error& e)
	{
		cout << "Caught runtime error " << e.what() << endl;
	}
	return 0;
}


