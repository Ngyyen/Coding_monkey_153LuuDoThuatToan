#include<iostream>
using namespace std;
#include<math.h>
int Dem_chuso(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "So chu so cua " << n << " la: " << Dem_chuso(n);
	return 0;
}
int Dem_chuso(int k)
{
	int dem = 0;
	int t = k;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	return dem;
}