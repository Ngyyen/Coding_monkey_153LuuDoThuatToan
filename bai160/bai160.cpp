#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int t = n;
	int d = n;
	int dem = 0;
	int dv;
	while (t >= 10)
	{
		t = t / 10;
	}
	while (d != 0)
	{
		dv = d % 10;
		if (dv == t)
		{
			dem++;
		}
		d = d / 10;
	}
	cout << "So luong chu so dau tien cua " << n << " la " << dem << endl;
	return 0;
}