#include <iostream>

using namespace std;

int dp(int x) {
	if (x == 1) {
		return 1;
	}
	if (x == 2) {
		return 2;
	}
	if (x == 3) {
		return 4;
	}
	return dp(x - 1) + dp(x - 2) + dp(x - 3);
}

int main() {
	int N, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		cout << dp(x) << '\n';
	}
	return 0;
}