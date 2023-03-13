#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_symmetry(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if (is_symmetry(n))
	{
		cout << "So " << n << " la so doi xung" << endl;
	}
	else
		cout << "So " << n << " khong la so doi xung" << endl;
	return 0;
}
bool is_symmetry(int n)
{
	int a = 0;
	int t = n;
	int b;
	while (t != 0)
	{
		b = t % 10;
		a = a * 10 + b;
		t = t / 10;
	}
	if (a == n)
		return true;
	else 
		return false;
}