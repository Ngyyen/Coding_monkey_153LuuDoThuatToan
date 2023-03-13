#include<iostream>
using namespace std;
#include<math.h>

void Nhap(int&, int&);
float Distance(int, int);
float CV_tamgiac(float, float, float);

int main()
{
	int x1, y1, x2, y2, x3, y3;
	Nhap(x1, y1);
	Nhap(x2, y2);
	Nhap(x3, y3);
	float d1 = Distance(x1, y1);
	float d2 = Distance(x2, y2);
	float d3 = Distance(x3, y3);
	cout << "Chu vi tam giac = " << CV_tamgiac(d1,d2,d3) << endl;
	return 0;
}
void Nhap(int& a, int& b)
{
	static int count = 1;
	cout << "Nhap toa do diem thu "<< count << endl;
	cout << "x" << count << " = ";
	cin >> a;
	cout << "y" << count << " = ";
	cin >> b;
	++count;
	return;
}
float Distance(int a, int b)
{
	float d = sqrt((b - a) * (b - a) + (b - a) * (b - a));
	return d;
}
float CV_tamgiac(float a, float b, float c)
{
	float p = a + b + c;
	return p;
}