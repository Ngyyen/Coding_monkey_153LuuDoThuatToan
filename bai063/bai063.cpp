#include<iostream>
using namespace std;
#include<math.h>
int Tich_sole(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "Tich cac chu so le cua " << n << " la: " << Tich_sole(n);
	return 0;
}

int Tich_sole(int k)
{

	int s = 1;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			s = s * dv;
		t = t / 10;
	}
	return s;
}
