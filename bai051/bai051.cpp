#include<iostream>
using namespace std;
#include<math.h>
int Tich_uoc(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Tich cac uoc so cua " << n << " la: " << Tich_uoc(n);
	return 0;
}
int Tich_uoc(int k)
{
	int s = 1;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			s = s * i;
		i++;
	}
	return s;
}