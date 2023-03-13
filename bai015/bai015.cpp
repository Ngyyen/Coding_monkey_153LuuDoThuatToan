#include<iostream>
using namespace std;
#include<math.h>
double Mu_64(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x64 = " << Mu_64(x) << endl;
	return 0;
}
double Mu_64(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x32 = x16 * x16;
	double x64 = x32 * x32;
	return x64;
}