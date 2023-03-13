#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
void Giai_pt(int, int, int);
int main()
{
	int a;
	cout << "Nhap a = ";
	cin >> a;
	int b;
	cout << "Nhap b = ";
	cin >> b;
	int c;
	cout << "Nhap c = ";
	cin >> c;
	Giai_pt(a, b, c);
	return 0;
}
void Giai_pt(int a, int b, int c)
{
	float x1, x2, x0;
	float denta = (b * b) - (4 * a * c);
	if (denta <= 0)
	{
		if (denta == 0)
		{
			x0 = (float)(-b) / (2 * a);
			cout << "Phuong trinh co nghiem kep x=" << x0 << endl;
		}
		else
			cout << "Phuong trinh vo nghiem" << endl;
	}
	else
	{
		x1 = (float)(-b + sqrt(denta)) / (2 * a);
		x2 = (float)(-b - sqrt(denta)) / (2 * a);
		cout << "Phuong trinh co 2 nghiem x1=" << x1 << " va " << "x2=" << x2 << endl;
	}
	return;
}