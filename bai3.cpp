#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-5;
int main() {	
	double result = 0;
	int cnt = 1;
	while (1.0f/(cnt*cnt) > eps) {
		result = result + 1.0f/(cnt*cnt);
		cnt++;
	}
	cout << result << endl;
	return 0;
}