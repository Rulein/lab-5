#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A;
	cout << "A=";
	cin >> A;
	if (A / 100 != 0 && A / 100 < 10)
	{
		cout << "Polychennoe chislo=" << A / 100 + A % 100 * 10;
	}
	else
	{
		cout << "error";
	}
}