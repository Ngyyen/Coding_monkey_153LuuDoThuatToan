#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_nhuan(int);
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	if (is_nhuan(n))
		cout << "Nam " << n << " la nam nhuan" << endl;
	else
		cout << "Nam " << n << " khong la nam nhuan" << endl;
	return 0;
}
bool is_nhuan(int n)
{
	float dk1 = (n % 4 == 0 && n % 100 != 0);
	float dk2 = (n % 400 == 0);
	if (dk1 || dk2)
		return true;
	else
		return false;
}