#include <iostream>
using namespace std;

int main()
{
	int v;
	cin >> v;
	int t;
	cin >> t;
	if (v > 0)
	{ 
		cout << (v * t) % 109 << endl;
	}
	else
	{
		cout << (v * t) % 109 + 109 << endl;
	}
}