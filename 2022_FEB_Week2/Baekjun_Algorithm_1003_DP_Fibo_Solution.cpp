#include<iostream>

using namespace std;
int counter = 0;
int arr[100];
int dp(int x) {
	if ( x == 1) {
		return 1;
	}
	if (x == 2) {
		return 1;
	}
	if (arr[x] != 0) {
		return arr[x];
	}
	return arr[x] = dp(x - 1) + dp(x - 2);
}

int main() {
	int T, x;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x;
		if (x == 0) {
			cout << "1" << " " << "0" << '\n';
		}
		else if (x == 1) {
			cout << "0" << " " << "1" << '\n';
		}
		else {
			cout << dp(x - 1) << " " << dp(x) << '\n';
		}
	}
	return 0;
}