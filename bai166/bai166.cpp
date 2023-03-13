#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	float p = 1;
	int k = 0;
	while (p <= n)
	{
		k = k + 1;
		p = p * 2;
	}
	cout << "So k nho nhat sao cho 2^k > " << n << " la " << k << endl;
	return 0;
}