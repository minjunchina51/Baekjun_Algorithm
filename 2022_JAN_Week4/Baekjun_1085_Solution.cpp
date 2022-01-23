#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	int arr[3];
	for (;;) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		else {
			arr = { a,b,c };
			sort(arr, arr + 2);
			if (sqrt(arr[0]) + sqrt(arr[1]) == sqrt[2]) {
				cout << "right";
			}
			else {
				cout << "wrong";
			}
		}
	}
	return 0;
}