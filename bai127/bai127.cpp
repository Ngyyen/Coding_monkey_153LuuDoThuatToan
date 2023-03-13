#include<iostream>
using namespace std;
#include<math.h>
float Min(float, float);
int main()
{
	float a;
	cout << "Nhap a = ";
	cin >> a;
	float b;
	cout << "Nhap b = ";
	cin >> b;
	
	cout << "Gia tri nho nhat la  " << Min(a,b) << endl;
	return 0;
}
float Min(float a, float b)
{
	float lc = a;
	if (lc > b)
		lc = b;
	return lc;
}