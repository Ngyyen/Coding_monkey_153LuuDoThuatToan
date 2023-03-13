#include<iostream>
using namespace std;
#include<math.h>
float Chu_vi(float);
int main()
{
	float r;
	cout << "Ban kinh = ";
	cin >> r;
	
	cout << "Chu vi duong tron = " << Chu_vi(r) << endl;
	return 0;
}
float Chu_vi(float k)
{
	double cv = 2 * 3.14 * k;
	return cv;
}