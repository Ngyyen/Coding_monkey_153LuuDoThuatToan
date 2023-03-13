#include<iostream>
using namespace std;
#include<math.h>
double Mu_15(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x15 = " << Mu_15(x) << endl;
	return 0;
}

double Mu_15(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x15 = x16 / x;
	return x15;
}