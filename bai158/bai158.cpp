#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int lc = n % 10;
	int t = n;
	int dem = 0;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem = dem + 1;
		else
		{
			if (dv > lc)
			{
				lc = dv;
				dem = 1;
			}
		}
		t = t / 10;
	}
	cout << "So luong chu so lon nhat cua " << n << " la " << dem << endl;
	return 0;
}