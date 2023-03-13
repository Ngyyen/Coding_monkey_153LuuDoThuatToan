#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
float F_(int);
int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	
	cout << "f(" << x << ")= " << F_(x) << endl;
	return 0;
}
float F_(int x)
{
	float f;
	if (x >= 5)
	{
		f = (2 * x * x) + (5 * x) + 9;
	}
	else
		f = ((-2) * x * x) + (4 * x) - 9;
	return f;
}