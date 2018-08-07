 ///
 /// @file    6_1055.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 21:05:28
 ///
 
#include <string.h>
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

struct Person {
	char name[9];
	int age;
	int wealth;
};

bool cmp(Person a, Person b) {
	if(a.wealth != b.wealth) {
		return a.wealth > b.wealth;
	} else if(a.age != b.age) {
		return a.age < b.age;
	} else {
		return strcmp(a.name, b.name) < 0;
	}
}

int main() {

	Person people[100000], valid[10000];

	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; ++i) {
		scanf("%s%d%d", people[i].name, &people[i].age, &people[i].wealth);
	}
	std::sort(people, people + n, cmp);
	int age[201] = {};
	int idx = 0;
	for(int i = 0; i < n; ++i) {
		if(age[people[i].age] > 100)
			continue;
		else {
			valid[idx++] = people[i];
		}
	}

	int m , agel, ageh, count;
	for(int i = 0; i < k; ++i) {
		count = 0;
		scanf("%d%d%d", &m, &agel, &ageh);
		printf("Case #%d:\n", i + 1);
		for(int i = 0; i < m; ++i) {
			if(valid[i].age >= agel && valid[i].age <= ageh) {
				printf("%s %d %d\n", valid[i].name, valid[i].age, valid[i].wealth);
				++count;
			} else if(m < idx) {
				++m;
			}
		}
		if(!count) {
			printf("None\n");
		}
	}

	return 0;
}
