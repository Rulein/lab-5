#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A;
	cout << "A=";
	cin >> A;
	if (A / 10 != 0 && A / 10 < 10)
	{
		cout << "Polychennoe chislo=" << A / 10 + A % 10 * 10;
	}
	else
	{
		cout << "error";
	}
}
