#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int i = 1;
	int a;
	cout << "Day gia tri la ";
	while (i <= n)
	{
		a = pow(2, i + 1);
		cout << a << " ";
		i = i + 1;
	}
	return 0;
}