#include<iostream>
#include<math.h>
using namespace std;
int Sum_chuso(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Tong cac chu so cua " << n << " la: " << Sum_chuso(n);
	return 0;
}
int Sum_chuso(int k)
{
	int s = 0;
	int t = k;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	return s;
}