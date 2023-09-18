#include<iostream>

using namespace std;

int main() {
	float toan(0), hoa(0), ly(0);
	cout << "Nhap diem thi cua cac mon: \n";
	cout << "Toan: ";
	cin >> toan;
	cout << "Hoa: ";
	cin >> hoa;
	cout << "Ly: ";
	cin >> ly;
	float hstoan(0), hshoa(0), hsly(0);
	cout << "Nhap he so cua cac mon: \n";
	cout << "Toan: ";
	cin >> hstoan;
	cout << "Hoa: ";
	cin >> hshoa;
	cout << "Ly: ";
	cin >> hsly;
	float tb(0);
	tb = (float) (toan * hstoan + hoa * hshoa + ly * hsly) / 3;
	cout << "Diem trung binh cua 3 mon la: " << tb << "\n";
	return 0;
}
