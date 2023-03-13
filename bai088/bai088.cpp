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
	float s = 0;
	float t = 0;
	int i = 1;
	int dau = 1;
	while (i <= k)
	{
		t = t + i;
		s = s + dau * (float)(1 / t);
		i = i + 1;
		dau = -dau;
	}
	return s;
}