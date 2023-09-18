#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int nam_sinh(0), nam_hien_tai(0), tuoi(0);
	cout << "Nam sinh: ";
	cin >> nam_sinh;
	time_t t = time(0);
	struct tm* now = localtime(&t);
	nam_hien_tai = now->tm_year + 1900;
	tuoi = nam_hien_tai - nam_sinh;
	cout << "Tuoi: " << tuoi << endl;
	return 0;
}

