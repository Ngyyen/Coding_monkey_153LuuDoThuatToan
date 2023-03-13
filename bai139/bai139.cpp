#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
void Giai_pt(int, int);
int main()
{
	int a;
	cout << "Nhap a = ";
	cin >> a;
	int b;
	cout << "Nhap b = ";
	cin >> b;
	Giai_pt(a, b);
	return 0;
}
void Giai_pt(int a, int b)
{
	float x;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Phuong trinh " << a << "x+" << b << "=0 vo so nghiem" << endl;
		}
		else
			cout << "Phuong trinh " << a << "x+" << b << "=0 vo nghiem" << endl;
	}
	else
	{
		x = (float)(-b) / a;
		cout << "Phuong trinh " << a << "x+" << b << "=0 co nghiem x = " << x << endl;
	}
	return;
}