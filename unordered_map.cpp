#include <iostream>
#include <unordered_map>//ÎŞĞòµÄmap
using namespace std;


int main()
{
	unordered_map<int, int> um;

	um.insert(pair<int, int>(3, 5));
	um[3] = 6;
	um[4] = 7;
	um[5] = 3;
	um[36] = 1;
	um[7] = 0;
	um[9] = 69;
	um[30] = 62;
	um[31] = 26;

	for (auto & i : um)
	{
		cout << i.first << ' ' << i.second << endl;
	}

	unordered_map<int, int>::reverse_iterator umri;
	for (umri = um.rbegin(); umri != um.rend(); umri++)
	{
		cout << umri->first << ' ' << umri->second << endl;
	}


	return 0;
}