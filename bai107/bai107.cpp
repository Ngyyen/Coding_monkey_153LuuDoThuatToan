#include<iostream>
using namespace std;
#include<math.h>
float Cos(float);
int main()
{
	float x;
	cout << "nhap x:";
	cin >> x;
	
	cout << "cos(" << x << ") = " << Cos(x) << endl;
	return 0;
}
float Cos(float x)
{
	float s = 1;
	float t = 1;
	int i = 2;
	int m = 1;
	float e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * i * (i - 1);
		e = (float)t / m;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}