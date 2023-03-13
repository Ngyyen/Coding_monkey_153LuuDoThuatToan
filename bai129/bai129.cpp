#include<iostream>
using namespace std;
#include<math.h>
void Ascend(float&, float&, float&);
int main()
{
	float a;
	cout << "Nhap a = ";
	cin >> a;
	float b;
	cout << "Nhap b = ";
	cin >> b;
	float c;
	cout << "Nhap c = ";
	cin >> c;
	Ascend(a, b, c);
	cout << "Gia tri tang dan: " << a << ", " << b << ", " << c << endl;
	return 0;
}
void Ascend(float& a, float& b, float& c)
{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	return;
}