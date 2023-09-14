#include <bits/stdc++.h>
using namespace std;
long long fibo(int id) {
	if (id == 1 || id == 2) return 1;
	return fibo(id - 1) + fibo(id - 2);
}
int main() {	
	long long n;
	cout << "Nhap n: ";
	cin >> n;
	int id = 0;
	while (fibo(id + 1) <= n) {
		id++;
	}
	if (id == 0) 
		cout << "Khong ton tai so fibonacci thoa man" << endl;
	else 
		cout << "So fibonacci thoa man la: " << fibo(id) << endl;
	return 0;
}