#include<iostream>
using namespace std;
#include<math.h>
void Ascend(float&, float&);
int main()
{
	float a;
	cout << "Nhap a = ";
	cin >> a;
	float b;
	cout << "Nhap b = ";
	cin >> b;
	Ascend(a, b);
	cout << "Gia tri tang dan la: " << a << ", " << b << endl;
	return 0;
}
void Ascend(float& a, float& b)
{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	return;
}