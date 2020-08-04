#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	if(n <= 30) {
		cout << "NO";
	}
	else {
		cout << "YES" << "\n";
		if(n == 36 || n == 40 || n == 44) {
			cout << 6 << " " << 10 << " " << 15 << " " << n - 31;
		}
		else {
			cout << 6 << " " << 10 << " " << 14 << " " << n - 30;
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
