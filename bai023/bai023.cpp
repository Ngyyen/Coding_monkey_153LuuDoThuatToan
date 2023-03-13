#include<iostream>
using namespace std;
#include<math.h>
int Find_hc(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Chu so hang chuc la " << Find_hc(n) << endl;
	return 0;
}
int Find_hc(int k)
{
	int hc = (k % 100) / 10;
	return hc;
}