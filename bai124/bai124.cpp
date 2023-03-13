#include<iostream>
using namespace std;
#include<math.h>
void Tinh_A_B_(int, int&, int&);
int main()
{
	int k;
	cout << "Nhap k = ";
	cin >> k;
	int ahh = 0, bhh = 0;
	Tinh_A_B_(k, ahh, bhh);
	cout << "a(" << k << ") = " << ahh << endl;
	cout << "b(" << k << ") = " << bhh << endl;
	return 0;
}
void Tinh_A_B_(int k, int& ahh, int& bhh)
{
	int at = 2;
	int bt = 1;
	int i = 2;
	
	while (i <= k)
	{
		ahh = (at * at) + (2 * bt * bt);
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return;
}




	
