#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_odd(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if (is_odd(n))
	{
		cout << "So " << n << " toan so le" << endl;
	}
	else
		cout << "So " << n << " khong toan so le" << endl;
	return 0;
}
bool is_odd(int n)
{
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			return false;
		t = t / 10;
	}
	return true;
}