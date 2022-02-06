#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, T;
	int result = 0;
	int counter = 0;
	vector<int>v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> T;
		v.push_back(T);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (v[i] > v[j]) {
				counter++;
			}
			else {
				break;
			}
		}
		result = max(result, counter);
		counter = 0;
	}
	cout << result;
	return 0;
}