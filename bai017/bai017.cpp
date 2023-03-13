#include<iostream>
using namespace std;
#include<math.h>
double Mu_11(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x11 = " << Mu_11(x) << endl;
	return 0;
}
double Mu_11(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x10 = x8 * x2;
	double x11 = x10 * x;
	return x11;
}