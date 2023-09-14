#include <bits/stdc++.h>
using namespace std;
#define MAX int(1e6 + 5)
int n, a[MAX];
int findIndex(int num) {
	int l = 1, r = n, mid;
	while (l <= r) {
		mid = (l + r) >> 1;
		if (a[mid] == num) return mid;
		if (a[mid] > num) r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}
int main() {	
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 1; i <= n; i++) 
		cin >> a[i];
	cout << "Nhap x: ";
	int x;
	cin >> x;
	int indexOfX = findIndex(x);
	if (indexOfX != -1)
		cout << "Vi tri cua x trong mang vua nhap la: " << findIndex(x) << endl;
	else 
		cout << "x khong ton tai trong mang vua nhap" << endl;
	return 0;
}