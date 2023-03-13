#include<iostream>
using namespace std;
#include<math.h>
double Dien_tich(float, float);
int main()
{
	float r;
	cout << "Ban kinh = ";
	cin >> r;
	float n;
	cout << "So canh noi tiep = ";
	cin >> n;
	
	cout << "Dien tich da giac deu = " << Dien_tich(r,n)<< endl;
	return 0;
}
double Dien_tich(float y, float k)
{
	double s = (3.14*k * y * y * sin(2 * 3.14 / k)) / 2;
	return s;
}