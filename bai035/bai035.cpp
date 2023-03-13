#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s * i;
		i = i + 1;
	}
	cout << "S(" << n << ") = " << s << endl;
	return 0;
}