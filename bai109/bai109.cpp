#include<iostream>
using namespace std;
#include<math.h>
float so_e();
int main()
{
	
	cout << "e = " << so_e() << endl;
	return 0;
}
float so_e()
{
	float s = 1;
	float t = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = t * i;
		e = (float)1 / t;
		s = s + e;
		i = i + 1;
	}
	return s;
}