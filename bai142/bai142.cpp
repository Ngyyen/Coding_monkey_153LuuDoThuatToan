#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
int re_num(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "So dao nguoc cua so " << n << " la " << re_num(n) << endl;
	return 0;
}
int re_num(int n)
{
	int b = 0;
	int t = n;
	int c;
	while (t != 0)
	{
		c = t % 10;
		b = b * 10 + c;
		t = t / 10;
	}
	return b;
}