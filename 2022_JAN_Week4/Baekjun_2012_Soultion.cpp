#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int>v;
	int N, rope;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> rope;
		v.push_back(rope);
	}
	sort(v.begin(), v.end());
	cout << v[0] * N;
	return 0;
}