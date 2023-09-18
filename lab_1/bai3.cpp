#include <iostream>
#include <string>
#define MAX 100;

using namespace std;

int main() {
    string ten_sp;
    cout << "Nhap ten san pham: ";
    getline(cin, ten_sp);
    int sl(0), gia(0);
    cout << "Nhap so luong: ";
    cin >> sl;
    cout << "Nhap don gia: ";
    cin >> gia;

    int tien(0), thue(0);
    tien = sl * gia;
    thue = (10 * tien) / 100;
    cout << "So tien phai tra la: " << tien << "VND\n";
    cout << "Thue gia tri gia tang phai tra la: " << thue << "VND\n";
    return 0;
}

