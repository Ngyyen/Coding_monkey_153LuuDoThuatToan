#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
void Check_triangle(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap do dai canh x: ";
	cin >> x;
	cout << "Nhap do dai canh y: ";
	cin >> y;
	cout << "Nhap do dai canh z: ";
	cin >> z;
	Check_triangle(x, y, z);
	return 0;
}
void Check_triangle(float x, float y, float z)
{
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
		{
			if (x == y || x == z || y == z)
				cout << "Tam giac vuong can" << endl;
			else
				cout << "Tam giac vuong" << endl;
		}
		else if (x == y || x == z || y == z)
		{
			if (x == y && y == z)
				cout << "Tam giac deu" << endl;
			else
				cout << "Tam giac can" << endl;
		}
		else
			cout << "Tam giac thuong" << endl;
	}
	else
		cout << "Khong la tam giac" << endl;
	return;
}