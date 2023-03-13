#include<iostream>
using namespace std;
#include<math.h>
float abs_(float);
int main()
{
	float a;
	cout << "Nhap a = ";
	cin >> a;
	float b;
	cout << "Nhap b = ";
	cin >> b;	
	cout << "abs cua a = " << abs_(a) << endl;
	cout << "abs cua b = " << abs_(b) << endl;
	return 0;
}
float abs_(float x)
{
	if (x < 0)
		x = -x;
	return x;
}