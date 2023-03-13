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
	Tinh_A_B_(k,ahh,bhh);
	cout << "a(" << k << ") = " << ahh << endl;
	cout << "b(" << k << ") = " << bhh << endl;
	return 0;
}
void Tinh_A_B_(int k, int& ahh, int& bhh)
{
	int at = 1;
	int bt = 1;
	int i = 2;

	while (i <= k)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return;
}