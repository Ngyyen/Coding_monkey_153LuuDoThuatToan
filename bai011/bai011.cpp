#include<iostream>
using namespace std;
#include<math.h>
void Nhap(int&, int&);
float DT_tamgiac(int, int, int, int, int, int);
int main()
{
	int x1, y1, x2, y2, x3, y3;
	Nhap(x1, y1);
	Nhap(x2, y2);
	Nhap(x3, y3);
	cout << "Dien tich tam giac = " << DT_tamgiac(x1, y1, x2, y2, x3, y3) << endl;
	return 0;
}
void Nhap(int& a, int& b)
{
	static int count = 1;
	cout << "Nhap toa do diem thu " << count << endl;
	cout << "x" << count << " = ";
	cin >> a;
	cout << "y" << count << " = ";
	cin >> b;
	++count;
	return;
}
float DT_tamgiac(int x1, int y1, int x2, int y2, int x3, int y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}