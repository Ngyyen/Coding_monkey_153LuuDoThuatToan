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
	int i = k;
	while (i >= 1)
	{
		s = sqrt(i + s);
		i = i - 1;
	}
	return s;
}




	
