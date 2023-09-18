#include<iostream>
#define MAX 4;
using namespace std;

int main() {
	int bien_so(0);
	cout << "Nhap bien so xe (4 chu so): ";
	cin >> bien_so;
	int n = bien_so;
	int nut(0);
	while (n > 0) {
		nut += n % 10;
		n /= 10;
	}
	if (nut > 9) {
		int n = nut;
		nut = 0;
		while (n > 0) {
			nut += n % 10;
			n /= 10;
		}
	}
	cout << "So xe cua ban duoc: " << nut << " nut.\n";
	return 0;
}
