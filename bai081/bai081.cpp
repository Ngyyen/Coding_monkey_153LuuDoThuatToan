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
	int i = 0;
	while (i <= k)
	{
		t = t * (y + i);
		s = s + (float)1 / t;
		i = i + 1;
	}
	return s;
}









	
