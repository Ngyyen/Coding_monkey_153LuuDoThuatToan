#include<iostream>
using namespace std;
#include<math.h>
void Print_uoc(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	Print_uoc(n);
	return 0;
}
void Print_uoc(int k)
{
	int i = 1;
	cout << "Cac uoc so cua " << k << " la: ";
	while (i <= k)
	{
		if (k % i == 0)
			cout << i << " ";
		i++;
	}
	return;
}