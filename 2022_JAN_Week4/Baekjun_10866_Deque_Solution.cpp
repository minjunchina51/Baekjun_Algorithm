#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	deque<int>dq;
	int N, num;
	string order;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (order == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		else if (order == "pop_front") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (order == "pop_back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (order == "size") {
			cout << dq.size() << '\n';
		}
		else if (order == "empty") {
			if (dq.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == "front") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		else if (order == "back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}
	return 0;
}