#include<iostream>
using namespace std;
#include<math.h>
double Mu_32(float);

int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x32 = " << Mu_32(x) << endl;
	return 0;
}
double Mu_32(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x32 = x16 * x16;
	return;
}