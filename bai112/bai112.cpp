#include<iostream>
using namespace std;
#include<math.h>
float so_pi();
int main()
{

	cout << "pi = " << so_pi() << endl;
	return 0;
}
float so_pi()
{
	float s = 0;
	float t;
	int i = 0;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = pow(16, i);
		e = (float)(((4.0 / (8 * i + 1)) - (2.0 / (8 * i + 4)) - (1.0 / (8 * i + 5)) - (1.0 / (8 * i + 6))) / t);
		s = s + e;
		i = i + 1;
	}
	return s;
}


	
