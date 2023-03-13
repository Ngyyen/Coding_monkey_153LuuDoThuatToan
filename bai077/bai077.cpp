#include<iostream>
using namespace std;
#include<math.h>
float Tinh(float, int);
int main()
{
	float k;
	cout << "k = ";
	cin >> k;
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "S(" << n << ") = " << Tinh(k,n) << endl;
	return 0;
}
float Tinh(float k, int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i = i + 1;
	}
	return s;
}