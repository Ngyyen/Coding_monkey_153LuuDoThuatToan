#include<iostream>
using namespace std;
#include<math.h>
float Dtxq(float);
int main()
{
	float r;
	cout << "Ban kinh = ";
	cin >> r;
	cout << "Dien tich xung quanh hinh cau = " << Dtxq(r) << endl;
	return 0;
}
float Dtxq(float k)
{
	double dt = 4 * 3.14 * k * k;
	return dt;
}