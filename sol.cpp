#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int n;
		cin >> n;
		if (n <= 30) {
			cout << "NO";
		} else {
			cout << "YES" << '\n';
			if (n == 36 || n == 40 || n == 44) {
				cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31;
			} else {
				cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30;
			}
		}
		cout << '\n';
	}
	return 0;
}
