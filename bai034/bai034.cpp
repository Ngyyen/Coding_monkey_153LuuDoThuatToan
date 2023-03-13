#include<iostream>
using namespace std;
#include<math.h>
int Tinh_tong(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "S(" << n << ") = " << Tinh_tong(n) << endl;
	return 0;
}
int Tinh_tong(int k)
{

	float s = 0;
	int i = 0;
	while (i <= k)
	{
		s = s + (float)(2 * i + 1) / (2 * i + 2);
		i = i + 1;
	}

	return s;
}







	