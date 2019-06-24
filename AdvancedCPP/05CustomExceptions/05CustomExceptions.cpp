// 05CustomExceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <exception>
#include <iostream>

using namespace std;

class MyException : exception
{
public:
	virtual char const* what() const override
	{
		return "Something bad happened!";
	}
};

class Test
{
public:
	void goesWrong()
	{
		throw MyException();
	}
};

int main()
{
	try {
		Test tester;
		tester.goesWrong();
	}
	catch (MyException& e)
	{
		cout << "MyException error: " << e.what() << endl;
	}
	return 0;
}


