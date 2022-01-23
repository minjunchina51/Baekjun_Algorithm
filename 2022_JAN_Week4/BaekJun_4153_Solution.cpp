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
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			sort(arr, arr + 3);
			if (pow(arr[0],2) + pow(arr[1],2) == pow(arr[2],2)) {
				cout << "right" << '\n';
			}
			else {
				cout << "wrong" << '\n';
			}
		}
	}
	return 0;
}