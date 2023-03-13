#include<iostream>
using namespace std;
#include<math.h>
float Tinh(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "S(" << n << ") = " << Tinh(n) << endl;
	return 0;
}
float Tinh(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i++)
	{
		s = s + i * (i + 1) * (i + 2);
	}
	return s;
}

	
