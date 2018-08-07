 ///
 /// @file    8_1083.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 21:06:00
 ///
 
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;

const int maxn = 50;

struct Student {
	char name[11];
	char id[11];
	int grade;
} stu[maxn];

bool cmp(Student a, Student b) {
	return a.grade > b.grade;
}

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s%s%d", stu[i].name, stu[i].id, &stu[i].grade);
	}

	int lowBoundary, highBoundary;
	scanf("%d%d", &lowBoundary, &highBoundary);

	sort(stu, stu + n, cmp);

	bool flag = false;
	for(int i = 0; i < n; i++) {
		if(stu[i].grade >= lowBoundary && stu[i].grade <= highBoundary) {
			flag = true;
			printf("%s %s\n", stu[i].name, stu[i].id);
		}
	}

	if(flag == false) 
		printf("NONE\n");



	return 0;
}
