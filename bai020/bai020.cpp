#include<iostream>
using namespace std;
#include<math.h>
double Mu_14(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;

	cout << "x14 = " << Mu_14(x) << endl;
	return 0;
}
double Mu_14(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x12 = x8 * x4;
	double x14 = x12 * x2;
	return x14;
}