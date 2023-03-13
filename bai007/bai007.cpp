#include<iostream>
using namespace std;
#include<math.h>
float Convert(float);
int main()
{
	float f;
	cout << "Do F = ";
	cin >> f;
	
	cout << "Do C = " << Convert(f) << endl;
	return 0;
}
float Convert(float k)
{
	float c = (5 * (k - 32)) / 9;
	return c;
}