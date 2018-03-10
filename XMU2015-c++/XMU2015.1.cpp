#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n,max,number;
	max = 0;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] =  NULL;
		b[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < i+1; j++) {
			if (a[j] == a[i]) {
				b[j]++;
				cout << "B["<<j<<"]" << b[j]<<endl;
				if (max < b[j]) {
					max = b[j];
					number = a[j];
					cout << "number "<<number<<endl;
				}
				break;
			}
		}
	}
	cout << " Final biggest number "<<number <<endl;

	int c;
	cin >> c;
	return 0;
	
}
