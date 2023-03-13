#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int lc = 1;
	int dv;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			if (i >= lc)
			{
				lc = i;
			}
		}
		i = i + 2;
	}
	cout << "Uoc so le lon nhat cua " << n << " la " << lc << endl;
	return 0;
}