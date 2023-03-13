#include<iostream>
using namespace std;
#include<math.h>
int Chuso_max(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Chu so lon nhat cua " << n << " la: " << Chuso_max(n);
	return 0;
}
int Chuso_max(int k)
{
	int lc = k % 10;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}