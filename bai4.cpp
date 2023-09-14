#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-5;
int tongChuSo(long long num) {
	int result = 0;
	while (num != 0) {
		result += num%10;
		num /= 10;
	}
	return result;
}
int main() {	
	long long num;
	cout << "Nhap so: ";
	cin >> num;
	cout << "Tong chu so cua so vua nhap la : " << tongChuSo(num) << endl;
	return 0;
}