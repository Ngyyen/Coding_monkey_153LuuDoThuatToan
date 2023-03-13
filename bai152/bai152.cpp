#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_powerof3(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	if (is_powerof3(n))
	{
		cout << "So " << n << " la dang 3^m" << endl;
	}
	else
		cout << "So " << n << " khong la dang 3^m" << endl;
	return 0;
}

bool is_powerof3(int n)
{
	int t = n;
	int dv;
	while (t > 1)
	{
		dv = t % 3;
		if (dv != 0)
			return false;
		t = t / 3;
	}
	return true;
}
	
	