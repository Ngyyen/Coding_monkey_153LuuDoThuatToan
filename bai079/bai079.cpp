#include<iostream>
using namespace std;
#include<math.h>
int Tinh(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "S(" << n << ") = " << Tinh(n) << endl;
	return 0;
}
int Tinh(int k)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= k)
	{
		t = t * i;
		s = s + i * t;
		i = i + 1;
	}
	return s;
}