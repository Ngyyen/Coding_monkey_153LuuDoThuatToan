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
	float s = 0;
	int i = 1;
	while (i <= k)
	{
		s = pow(s + i, (float)1 / (i + 1));
		i = i + 1;
	}
	return s;
}










	
