#include<iostream>
using namespace std;
#include<math.h>
int Dem_uoc(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "So uoc so cua " << n << " la: " << Dem_uoc(n);
	return 0;
}
int Dem_uoc(int k)
{
	int dem = 0;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			dem = dem + 1;
		i++;
	}
	return dem;
}
