#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << abs(n) / 100 + (abs(n) / 10) % 10 + abs(n) % 10 << endl;
}
