#include <iostream>
#include <algorithm>
using namespace std;

void cout_num(int n) {
	char *numberStr[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	if (n / 10 != 0) {
		cout_num(n / 10);
		cout << " " << numberStr[n % 10];
	}
	else {
		cout << numberStr[n % 10];
	}
}
int main()
{
	char *n = new char[101];
	cin >> n;
	int num = 0;
	int temp = 0;
	for (int i = 0; n[i] != NULL; i++) {
		temp = n[i] - 48;
		num = temp + num;
	}
	cout_num(num);
	int a;
	cin >> a;
	return 0;
}