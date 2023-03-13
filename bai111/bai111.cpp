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
	float s = 3;
	float t = 1;
	int i = 1;
	float e = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		t = 2 * i * (2 * i + 1) * (2 * i + 2);
		e = (float)4 / t;
		s = s + dau * e;
		i = i + 1;
		dau = -dau;
	}
	return s;
}
	
