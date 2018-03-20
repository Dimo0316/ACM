#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int num[],int a,int b) {
	int temp = num[a];
	num[a] = num[b];
	num[b] = temp;
}
int main() {
	int n,m;
	cin >> n >> m;
	int *num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	if (m >= n) {
		m = m - n;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n-m; j++) {
			swap(num, n - m + i-j, n - m + i - 1-j);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << num[i] <<((i<n-1)?" ":"\n");
	}
	return 0;
}
