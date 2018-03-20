#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct student {
	char name[11];
	char number[11];
	int score;
};
int main() {
	int n;
	cin >> n;
	struct student *stu = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].number >> stu[i].score;
	}
	int max_index = 0, min_index = 0, max = -1, min = 101;
	for (int i = 0; i < n; i++) {
		if (max < stu[i].score) {
			max = stu[i].score;
			max_index = i;
		}
		if (min > stu[i].score) {
			min = stu[i].score;
			min_index = i;
		}
	}


	cout << stu[max_index].name << " " << stu[max_index].number << endl;
	cout << stu[min_index].name << " " << stu[min_index].number << endl;

	return 0;
}