#include<iostream>
using namespace std;
#include<math.h>
bool is_triangle(float, float, float);
int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float y;
	cout << "Nhap y = ";
	cin >> y;
	float z;
	cout << "Nhap z = ";
	cin >> z;
	if (is_triangle(x, y, z))
		cout << "La tam giac" << endl;
	else
		cout << "Khong la tam giac" << endl;
	return 0;
}
bool is_triangle(float x, float y, float z)
{
	if (x + y > z && x + z > y && y + z > x)
		return true;
	else
		return false;
}