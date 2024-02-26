#include <iostream>
using namespace std;
int main() {
	int so1, so2, tich;
	cout << "chuong trinh tinh tich\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu 2:";
	cin >> so2;
	tich = so1 * so2;
	cout << so1 << "*" << so2 << "="
		<< tich
		<< endl;
	return 0;
}