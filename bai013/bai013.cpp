#include<iostream>
using namespace std;
#include<math.h>
float Mu_7(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	
	cout << "x7 = " << Mu_7(x) << endl;
	return 0;
}
float Mu_7(float x)
{
	float x2 = x * x;
	float x3 = x2 * x;
	float x5 = x3 * x2;
	float x7 = x5 * x2;
	return x7;
}

