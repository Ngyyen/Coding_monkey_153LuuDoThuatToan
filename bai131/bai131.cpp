#include<iostream>
using namespace std;
#include<math.h>
#include <string>
void Nhap(const string&,float&, float&);
bool is_triangle(float, float, float, float, float, float );
int main()
{
	float xa, ya, xb, yb, xc, yc;
	Nhap("A", xa, ya);
	Nhap("B", xb, yb);
	Nhap("C", xc, yc);
	
	
	if (is_triangle(xa, ya, xb, yb, xc, yc))
		cout << "La tam giac" << endl;
	else
		cout << "Khong la tam giac" << endl;
	return 0;
}
void Nhap(const string& S,float& x, float& y)
{
	cout << "Nhap toa do diem "<<S<<" :" << endl;
	cout << "x" << S << " = ";
	cin >> x;
	cout << "y" << S << " = ";
	cin >> y;
	return;
}
bool is_triangle(float xa, float ya, float xb, float yb, float xc, float yc)
{
	float d1 = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
	float d2 = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
	float d3 = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));
	if (d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1)
		return true;
	else
		return false;
}