#include<iostream>
using namespace std;
#include<math.h>
int Tong_uoc(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "Tong cac uoc so cua " << n << " la: " << Tong_uoc(n);
	return 0;
}
int Tong_uoc(int k)
{
	int s = 0;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			s = s + i;
		i++;
	}
	return s;
}