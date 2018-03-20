#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int hundred = n / 100;
	int ten = (n - hundred * 100) / 10;
	int bit = n - hundred * 100 - ten * 10;

	for (int i = 0; i < hundred; i++) {
		cout << "B";
	}
	for (int i = 0; i < ten; i++) {
		cout << "S";
	}
	for (int i = 1; i < bit + 1; i++) {
		cout << i;
	}


	return 0;
}