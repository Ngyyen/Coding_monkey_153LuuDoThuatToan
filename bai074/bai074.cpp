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
	int m = 1;
	float t = 1;
	int i = 1;
	while (i <= k)
	{
		t = t * y;
		m = m * i;
		s = s + (float)t / m;
		i = i + 1;
	}
    return s;
}



