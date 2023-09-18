#include<iostream>

using namespace std;

int main() {
	char c(0);
	cout << "Nhap ki tu chu thuong: ";
	cin >> c;
	char C(0);
	C = (int) c - 32;
	cout << "Ky tu chu hoa tuong ung la: " << C << "\n";
	return 0;
}
