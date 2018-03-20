#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

bool isPrime(int num) {
	//两个较小数另外处理  
	//if (num == 2 || num == 3)
	//	return 1;
	//不在6的倍数两侧的一定不是质数  
	if (num % 6 != 1 && num % 6 != 5)
		return 0;
	int tmp = sqrt(num);
	//在6的倍数两侧的也可能不是质数  
	for (int i = 5; i <= tmp; i += 6)
		if (num %i == 0 || num % (i + 2) == 0)
			return 0;
	//排除所有，剩余的是质数  
	return 1;
}
int main() {
	int n, j, k, index, number = 0;
	int p[10000] = { 1,2,3 };
	index = 3;
	cin >> n;
	for (int i = 4; i < n + 1; i++) {
		if (isPrime(i)) {
			p[index] = i;
			if (p[index] - p[index - 1] == 2)
				number++;
			index++;

		}
	}
	cout << number;
	cin >> n;
	return 0;
}