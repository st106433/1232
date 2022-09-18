#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n + 2 - (abs(n) % 2) << endl;
}