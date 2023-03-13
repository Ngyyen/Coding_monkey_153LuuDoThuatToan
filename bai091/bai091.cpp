#include<iostream>
using namespace std;
#include<math.h>
float Tinh(float, int);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	int n;
	cout << "n = ";
	cin >> n;

	cout << "S(" << x << "," << n << ") = " << Tinh(x, n) << endl;
	return 0;
}
float Tinh(float y, int k)
{
	float s = -1;
	float t = 1;
	int m = 1;
	int i = 2;
	int dau = 1;
	while (i <= (2 * k))
	{
		t = t * y * y;
		m = m * i * (i - 1);
		s = s + dau * (float)(t / m);
		i = i + 2;
		dau = -dau;
	}

	return s;
}








	