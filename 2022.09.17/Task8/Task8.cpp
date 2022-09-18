#include <iostream>
using namespace std;

int main()
{
	int h1;
	cin >> h1;
	int m1;
	cin >> m1;
	int s1;
	cin >> s1;
	int h2;
	cin >> h2;
	int m2;
	cin >> m2;
	int s2;
	cin >> s2;
	cout << (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1) << endl;
}
