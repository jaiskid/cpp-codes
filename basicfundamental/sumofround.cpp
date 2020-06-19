#include<bits/stdc++.h>
using namespace std;
int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		while (n > 0) {
			int rem = n % 10;
			if (rem != 0) {
				cout << rem << endl;
				break;
			}
			n /= 10;
		}
	}
}
