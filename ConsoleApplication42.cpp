#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A, B;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	if (A > 0 && B > 0 && A > B)
	{
		cout << "Nezanyataya chast'=" << A % B;
	}
	else
	{
		cout << "Error";
	}
}
