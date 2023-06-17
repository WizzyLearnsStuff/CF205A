#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int min = 0;
	int count = 1;
	int midx = 1;

	cin >> min;
	for(int i = 1; i < n; i++) {
		int a;
		cin >> a;
		if (min > a) {
			min = a;
			count = 1;
			midx = i + 1;
		} else if (min == a) {
			count++;
		}
	}

	if (count > 1) {
		cout << "Still Rozdil";
	} else {
		cout << midx;
	}
}
