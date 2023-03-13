#include<iostream>
using namespace std;
#include<math.h>
int F_(int);
int main()
{
	int n = 0;
	cout << "Nhap n = ";
	cin >> n;
	
	cout << "f(" << n << ") = " << F_(n) << endl;
	return 0;
}
int F_(int k)
{
	int ftt = 1;
	int ft = 1;
	int i = 2;
	int fhh = 0;
	while (i <= k)
	{
		fhh = ftt + ft;
		ftt = ft;
		ft = fhh;
		i = i + 1;
	}
	return fhh;
}