#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	queue<int>q;
	string order;
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			q.push(num);
		}
		else if (order == "pop") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (order == "size") {
			cout << q.size() << '\n';
		}
		else if (order == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (order == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
	return 0;
}