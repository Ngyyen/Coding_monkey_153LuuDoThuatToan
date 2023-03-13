#include<iostream>
using namespace std;
#include<math.h>
float Sin(float);
int main()
{
	float x;
	cout << "nhap x:";
	cin >> x;
	
	cout << "sin(" << x << ") = " << Sin(x) << endl;
	return 0;
}
float Sin(float x)
{
	float s = x;
	float t = x;
	int i = 3;
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