#include<iostream>
using namespace std;
#include<math.h>
int Chuso_min(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "Chu so be nhat cua " << n << " la: " << Chuso_min(n);
	return 0;
}

int Chuso_min(int k)
{
	int lc = k % 10;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
	
