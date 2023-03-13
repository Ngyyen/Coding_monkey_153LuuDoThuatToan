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
	float t = 0;
	cout << "Day gia tri la ";
	while (i <= n)
	{
		t = t + (float)1 / i;
		cout << t << " ";
		i = i + 1;
	}
	return 0;
}