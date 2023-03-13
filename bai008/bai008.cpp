#include<iostream>
using namespace std;
#include<math.h>
double Chu_vi(float, float);
int main()
{
	float r;
	cout << "Ban kinh = ";
	cin >> r;
	float n;
	cout << "So canh noi tiep = ";
	cin >> n;
	
	cout << "Chu vi da giac deu = " << Chu_vi(r,n) << endl;
	return 0;
}
double Chu_vi(float y, float k)
{
	double p = 2 * 3.14 * y * sin(3.14 / k);
	return p;
}