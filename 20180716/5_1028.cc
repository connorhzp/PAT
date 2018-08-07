 
 //
 /// @file    5_1028.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 21:05:05
 ///
 
#include <string.h>
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

struct Student {
	int ID;
	char name[9];
	int grade;
};

bool cmpid(Student a, Student b) {
	return a.ID < b.ID;
}
bool cmpname(Student a, Student b) {
	if(strcmp(a.name, b.name)) {
		return strcmp(a.name, b.name) < 0;
	} else {
		return a.ID < b.ID;
	}
}
bool cmpgrade(Student a, Student b) {
	if(a.grade != b.grade)
		return a.grade < b.grade;
	else {
		return a.ID < b.ID;
	}
}

typedef bool (*CMPp)(Student,Student);

int main() {
	int n, c;
	CMPp mp[4] = {NULL, cmpid, cmpname, cmpgrade}; 

	Student stu[100000];
	scanf("%d%d", &n, &c);
	for(int i = 0; i < n; ++i) {
		scanf("%d%s%d", &stu[i].ID, stu[i].name, &stu[i].grade);
	}
	std::sort(stu, stu + n, mp[c]);

	for(int i = 0; i < n; ++i) {
		printf("%06d %s %d\n", stu[i].ID, stu[i].name, stu[i].grade);
	}

	return 0;
}
