#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, int>>v;
	int N, x, y, p1, counter = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				counter++;
			}
		}
		cout << counter + 1 << " ";
		counter = 0;
	}
	return 0;
}