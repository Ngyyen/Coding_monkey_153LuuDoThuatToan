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
	float s = 1 + y;
	int m = 1;
	float t = y;
	int i = 3;
	while (i <= (2 * k + 1))
	{
		t = t * y * y;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}





