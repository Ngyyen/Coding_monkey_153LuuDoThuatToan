#include<iostream>
using namespace std;
#include<math.h>
float Tinh(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "S(" << n << ") = " << Tinh(n) << endl;
	return 0;
}
float Tinh(int k)
{
	float s = 1;
	for (int i = 1; i <= k; i++)
	{
		s = s * (float)(1.0 + (float)(1.0 / (i * i)));
	}
	return s;
}