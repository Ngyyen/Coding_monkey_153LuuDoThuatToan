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
	int c = a;
	a = b;
	b = c;
	cout << "Hai so a va b la: " << a << " va " << b << endl;
	return;
}