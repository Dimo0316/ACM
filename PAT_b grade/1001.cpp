#include <iostream>
#include <algorithm>
using namespace std;
int decline(int m) {
	if (m % 2 == 0) {
		return (m / 2);
	}
	else {
		return((m * 3 + 1) / 2);
	}

}
int main()
{
	int n;
	int num = 1;
	cin >> n;
	if (n == 1) {
		num = 0;
	}
	else {
		int a = decline(n);
		while (a > 1) {
			a = decline(a);
			num++;
		}
	}
	cout << num << endl;
	return 0;
}