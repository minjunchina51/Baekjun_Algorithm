#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int zero = 0, one = 0;
	string S; 
	cin >> S;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] != S[i + 1]) {
			if (S[i] == '0') {
				zero++;
			}
			if (S[i] == '1') {
				one++;
			}
		}
	}
	cout << min(zero, one);
	return 0;
}