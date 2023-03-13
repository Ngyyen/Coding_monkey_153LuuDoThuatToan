#include<iostream>
using namespace std;
#include<math.h>
int Tong_sochan(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Tong cac chu so chan cua " << n << " la: " << Tong_sochan(n);
	return 0;
}
int Tong_sochan(int k)
{
	int s = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	return s;
}