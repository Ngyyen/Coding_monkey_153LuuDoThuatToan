#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = (float)1 / (1 + s);
		i = i + 1;
	}
	cout << "S(" << n << ") la " << s << endl;
	return 0;
}