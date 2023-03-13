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
	float s = 0;
	float t = 1;
	int i = 2;
	while (i <= (2 * k))
	{
		t = t * y * y;
		s = s + t;
		i = i + 2;
	}
	return s;
}
	
