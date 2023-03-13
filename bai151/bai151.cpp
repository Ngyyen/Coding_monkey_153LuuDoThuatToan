#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_powerof2(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if (is_powerof2(n))
	{
		cout << "So " << n << " la dang 2^m" << endl;
	}
	else
		cout << "So " << n << " khong la dang 2^m" << endl;
	return 0;
}
bool is_powerof2(int n)
{
	int t = n;
	int dv;
	while (t != 1)
	{
		dv = t % 2;
		if (dv == 1)
			return false;
		t = t / 2;
	}
	return true;
}