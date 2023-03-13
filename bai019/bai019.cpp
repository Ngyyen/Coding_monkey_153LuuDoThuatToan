#include<iostream>
using namespace std;
#include<math.h>
double Mu_13(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x13 = " << Mu_13(x) << endl;
	return 0;
}
double Mu_13(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x12 = x8 * x4;
	double x13 = x12 * x;
	return x13;
}