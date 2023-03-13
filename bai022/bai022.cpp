#include<iostream>
using namespace std;
#include<math.h>
void Print_dv(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	Print_dv(n);
	return 0;
}
void Print_dv(int k)
{
	int dv = k % 10;
	cout << "Chu so hang don vi la " << dv << endl;
	return;
}