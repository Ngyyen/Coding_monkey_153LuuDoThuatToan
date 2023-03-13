#include<iostream>
using namespace std;
#include<math.h>
float Distance(float&, float&, float&, float& );

int main()
{
	float x1, y1, x2, y2;
	cout <<"Khoang cach giua 2 diem A va B la: "<< Distance(x1, y1, x2, y2);
	return 0;
}
float Distance(float& x1, float& y1, float& x2, float& y2 )
{
	cout << "Nhap toa do diem A:" << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "Nhap toa do diem B:" << endl;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return d;
}