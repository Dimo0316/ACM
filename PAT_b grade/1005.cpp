#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

void sort(int *P, int K) {              //排序 
	int i, j, temp;
	for (i = 0; i<K; i++)
		for (j = i + 1; j<K; j++)
		{
			if (P[i]<P[j])
			{
				temp = P[i];
				P[i] = P[j];
				P[j] = temp;
			}
		}
}
int main() {
	int n;
	cin >> n;
	int *num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int temp;
	for (int i = 0; i < n; i++) {
		temp = num[i];
		if (temp == 0) continue; //碰到0则推出
		while (temp != 1) {//
			if (temp % 2 == 0) temp = temp / 2;
			else temp = (3 * temp + 1) / 2;
			for (int j = 0; j < n; j++) {//数组中所有数与运算中出现的数比较
				if (num[j] == temp) {
					num[j] = 0;
					break;
				}
			}
		}
	}
	sort(num, n);
	for (int i = 0; num[i]>0; i++) {
		printf("%d%s", num[i], num[i + 1]>0 ? " " : "");
	}
	return 0;
}