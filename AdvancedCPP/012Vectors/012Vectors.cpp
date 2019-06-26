

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	strings.push_back("four");
	strings.push_back("five");
	strings.push_back("six");
	for (const auto& s : strings)
	{
		cout << s << endl;
	}
	return 0;
}
