#include<iostream>
using namespace std;
#include<math.h>
void Convert(int&, int&);
int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	Convert(a, b);
	return 0;
}
void Convert(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Hai so a va b la: " << a << " va " << b << endl;
	return;
}