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
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= k)
	{
		ahh = (float)(at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}











