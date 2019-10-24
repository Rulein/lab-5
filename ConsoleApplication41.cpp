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
		A = A / B;
		cout << "Kolichestvo B otrezkov=" << A;
	}
	else
	{
		cout << "Error";
	}
}
