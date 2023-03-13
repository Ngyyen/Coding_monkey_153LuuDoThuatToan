#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_pfsquare(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if (is_pfsquare(n))
	{
		cout << "So " << n << " la so chinh phuong" << endl;
	}
	else
		cout << "So " << n << " khong la so chinh phuong" << endl;
	return 0;
}
bool is_pfsquare(int n)
{
	int i = 0;
	while (i <= n)
	{
		if (i * i == n)
			return true;
		i = i + 1;
	}
	return false;
}