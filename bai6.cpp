#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
int main() {	
	int a, b;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Boi chung nho nhat cua hai so vua nhap la: " << 1ll*a*b/gcd(a, b) << endl;
	return 0;
}