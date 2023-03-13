#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_even(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if (is_even(n))
	{
		cout << "So " << n << " toan so chan" << endl;
	}
	else
		cout << "So " << n << " khong toan so chan" << endl;
	return 0;
}
bool is_even(int n)
{
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			return false;
		t = t / 10;
	}
	return true;
}