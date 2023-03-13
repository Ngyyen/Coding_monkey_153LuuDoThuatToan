#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
void print_leap(int,int);
int main()
{
	int x;
	cout << "Nam x la ";
	cin >> x;
	int y;
	cout << "Nam y la ";
	cin >> y;
	print_leap(x, y);
	return 0;
}
void print_leap(int x, int y)
{
	int i = x;
	cout << "Cac nam nhuan la ";
	while (i <= y)
	{
		float dk1 = (i % 4 == 0 && i % 100 != 0);
		float dk2 = (i % 400 == 0);
		if (dk1 || dk2)
		{
			cout << i << " ";
		}
		i = i + 1;
	}
	return;
}