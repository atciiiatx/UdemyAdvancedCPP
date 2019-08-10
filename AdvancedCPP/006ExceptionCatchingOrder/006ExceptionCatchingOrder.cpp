// 06ExceptionCatchingOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <exception>
#include <iostream>

using namespace std;

void goesWrong(bool error1Detected, bool error2Detected)
{
	if (error1Detected)
	{
		throw bad_alloc();
	}

	if (error2Detected)
	{
		throw exception();
	}
}

int main()
{
	for (int i = 0; i < 2; ++i)
	{
		bool e1 = (i == 0);
		bool e2 = (i != 0);
		try
		{
			goesWrong(e1, e2);
		}
		catch (bad_alloc& e)
		{
			cout << "Bad Alloc " << e.what() << endl;
		}
		catch (exception& e)
		{
			cout << "Exception " << e.what() << endl;
		}
	}
	return 0;
}
