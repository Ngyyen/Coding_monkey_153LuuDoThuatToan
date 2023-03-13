#include<iostream>
using namespace std;
#include<math.h>
int Tich_uocle(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Tich uoc so le cua " << n << " la: " << Tich_uocle(n);
	return 0;
}
int Tich_uocle(int k)
{
	int s = 1;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			s = s * i;
		i = i + 2;
	}
	return s;
}