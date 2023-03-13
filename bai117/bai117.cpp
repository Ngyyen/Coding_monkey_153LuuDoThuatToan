#include<iostream>
using namespace std;
#include<math.h>
int So_thu(int);
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "a(" << n << ") = " << So_thu(n) << endl;
	return 0;
}
int So_thu(int k)
{
	int att = -1;
	int at = 3;
	int i = 2;
	int ahh;
	while (i <= k)
	{
		ahh = (5 * pow(2, i)) + (5 * at) - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}






	
