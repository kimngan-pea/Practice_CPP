#include<iostream>

using namespace std;

int main() {
	int a(0), b(0);
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	int tong(0), hieu(0), tich(0);
	float thuong(0);
	cout << "Tong cua a va b la: " << a + b << endl;
	cout << "hieu cua a va b la: " << a - b << endl;
	cout << "Tich cua a va b la: " << a * b << endl;
	cout << "Thuong cua a va b la: " << (float) a / b << endl;
	return 0;
}