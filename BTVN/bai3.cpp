#include<iostream> 

using namespace std;

int main() {
	int a(0), b(0), c(0);
	cout << "Nhap 3 so nguyen: \n";
	cin >> a >> b >> c;
	if (a > b) {
		if (a > c) {
			cout << a << " la so lon nhat.\n";
			if (b > c) {
				cout << c << " la so nho nhat.\n";
				return 0;
			}
		}
		else {
			cout << c << " la so lon nhat.\n";
		}
		cout << b << " la so nho nhat.\n";
	}
	else {
		if (b > c) {
			cout << b << " la so lon nhat.\n";
			if (a > c) {
				cout << c << " la so nho nhat.\n";
				return 0;
			}
		}
		else {
			cout << c << " la so lon nhat.\n";
		}
		cout << a << " la so nho nhat.\n";
	}
	return 0;
}
