#include<iostream>

using namespace std;

int main() {
	int r(0), C(0), S(0);
	cout << "Nhap ban kinh: ";
	cin >> r;
	float pi = 3.14;
	C = pi * r;
	S = pi * r * r;
	cout << "Chu vi cua duogn tron la: " << C << "\n";
	cout << "Dien tich cua duong tron la: " << S << "\n";
	return 0;
}
