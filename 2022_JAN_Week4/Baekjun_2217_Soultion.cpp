#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, num;
	long long sum = 0;
	vector<int>v;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		sum += v[i];
	}
	cout << sum;
	return 0;
}