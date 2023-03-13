#include<iostream>
using namespace std;
#include<math.h>
int Dem_sole(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "So luong chu so le cua " << n << " la: " << Dem_sole(n);
	return 0;
}
int Dem_sole(int k)
{
	int dem = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	return dem;
}