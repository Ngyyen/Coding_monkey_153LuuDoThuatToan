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

	int s = 1;
	int i = 1;
	while (i <= k)
	{
		s = s * i;
		i = i + 1;
	}
    return s;
}








	