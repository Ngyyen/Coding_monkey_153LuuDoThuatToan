#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	float p = 0;
	int k = 0;
	while (p < n)
	{
		k = k + 1;
		p = p + k;
	}
	cout << "So k nho nhat sao cho S(k) < " << n << " la " << k - 1 << endl;
	return 0;
}