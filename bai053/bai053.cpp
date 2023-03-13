#include<iostream>
using namespace std;
#include<math.h>
void Print_uocle(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	Print_uocle(n);
	return 0;
}
void Print_uocle(int k)
{
	int i = 1;
	cout << "Cac uoc so le cua " << k << " la: ";
	while (i <= k)
	{
		if (k % i == 0)
			cout << i << " ";
		i = i + 2;
	}
	return;
}