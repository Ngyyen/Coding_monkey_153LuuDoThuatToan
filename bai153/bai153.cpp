#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_powerof5(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if (is_powerof5(n))
	{
		cout << "So " << n << " la dang 5^m" << endl;
	}
	else
		cout << "So " << n << " khong la dang 5^m" << endl;
	return 0;
}
bool is_powerof5(int n)
{
	int t = n;
	int dv;
	while (t > 1)
	{
		dv = t % 5;
		if (dv != 0)
			return false;
		t = t / 5;
	}
	return true;
}