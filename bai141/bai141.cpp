#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
int first_num(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Chu so dau tien cua so " << n << " la " << first_num(n) << endl;
	return 0;
}
int first_num(int n)
{
	int t = n;
	while (t >= 10)
	{
		t = t / 10;
	}
	return t;
}