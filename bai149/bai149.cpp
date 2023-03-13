#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
int UCLN(int, int);
int main()
{
	int m;
	cout << "Nhap m = ";
	cin >> m;
	int n;
	cout << "Nhap n = ";
	cin >> n;
	
	cout << "Uoc chung lon nhat cua hai so " << m << " va " << n << " la " << UCLN(m,n) << endl;
	return 0;
}
int UCLN(int m, int n)
{
	int a = abs(m);
	int b = abs(n);
	while (a * b != 0)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
	return a + b;
}