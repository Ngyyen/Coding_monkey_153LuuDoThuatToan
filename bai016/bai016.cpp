#include<iostream>
using namespace std;
#include<math.h>
double Mu_9(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x9 = " << Mu_9(x) << endl;
	return 0;
}
double Mu_9(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	double x8 = x4 * x4;
	double x9 = x8 * x;
	return x9;
}