#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_perfect(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	if(is_perfect(n))
		cout << "So " << n << " la so hoan thien" << endl;
	else
		cout << "So " << n << " khong la so hoan thien" << endl;
	return 0;
}
bool is_perfect(int n)
{
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
		i = i + 1;
	}
	if (s == n)
		return true;
	else
		return false;
}