#include<iostream>
using namespace std;
#include<math.h>
float Volume(float);
int main()
{
	float r;
	cout << "Ban kinh = ";
	cin >> r;
	
	cout << "The tich hinh cau = " << Volume(r) << endl;
	return 0;
}
float Volume(float k)
{
	double tt = (4 * 3.14 * k * k * k) / 3;
	return tt;
}