#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int at = n;
	float as;
	cout << "Day gia tri la " << n << " ";
	while (at > 1)
	{
		if (at % 2 != 0)
		{
			as = 3 * at + 1;
		}
		else
			as = (float)at / 2;
		cout << as << " ";
		at = as;
	}
	return 0;
}