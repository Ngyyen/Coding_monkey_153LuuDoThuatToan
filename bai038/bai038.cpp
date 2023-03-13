#include<iostream>
using namespace std;
#include<math.h>
int Tinh_tong(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "T(" << n << ") = " << Tinh_tong(n) << endl;
	return 0;
}
int Tinh_tong(int k)
{
	int t = 0;
	for (int i = 1; i <= k; i++)
	{
		t = t + i * i * i * i;
	}
	return t;
}
	