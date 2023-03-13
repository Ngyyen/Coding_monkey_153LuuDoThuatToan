#include<iostream>
using namespace std;
#include<math.h>
bool Check_le(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	if (Check_le(n))
		cout << "So " << n << " khong ton tai chu so le " << endl;
		
	else
		cout << "So " << n << " ton tai chu so le " << endl;
	return 0;
}
bool Check_le(int k)
{
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			return false;
		t = t / 10;
	}
	return true;
}
	
