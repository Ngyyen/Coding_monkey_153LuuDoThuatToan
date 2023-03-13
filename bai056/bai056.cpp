#include<iostream>
using namespace std;
#include<math.h>
int Dem_uocchan(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "So uoc so chan cua " << n << " la: " << Dem_uocchan(n);
	return 0;
}
int Dem_uocchan(int k)
{
	int dem = 0;
	int i = 2;
	while (i <= k)
	{
		if (k % i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}