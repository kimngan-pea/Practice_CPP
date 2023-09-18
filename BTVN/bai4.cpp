#include<iostream>
#include<cmath>

using namespace std;

int main() {
	float x(0), y1(0), y2(0);
	cout << "Nhap so thuc x: ";
	cin >> x;

	y1 = (float) 4 * (x * x + 10 * x * sqrt(x) + 3 * x + 1);
	cout << "a.Gia tri cua bieu thuc y1 la: " << y1 << "\n";

	float pi = 3.14;
	y2 = (float) (sin(pi * x * x) + sqrt(x * x + 1)) / (exp(2 * x) + cos(pi / 4 * x));
	cout << "b.Gia tri bieu thu y2 la: " << y2 << "\n";
	return 0;
}

