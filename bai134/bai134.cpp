#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_BDT(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;
	if (is_BDT(x,y,z))
		cout << "Bat dang thuc dung" << endl;
	else
		cout << "Bat dang thuc khong dung" << endl;
	return 0;
}
bool is_BDT(float x, float y, float z)
{
	if (x <= y && y <= z)
		return true;
	else
		return false;
}