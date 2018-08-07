 ///
 /// @file    4_1025_test.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 22:40:19
 ///
 
#include <string.h>
#include <iostream>
#include <algorithm>


struct Student {
	char ID[14];
	int score;
	int location;
	int local_rank;


} testee[30001]; 


bool cmp(Student a, Student b) {
	if(a.score != b.score) return a.score > b.score;
	else return strcmp(a.ID, b.ID) < 0;
}



int main() {
	int n;
	scanf("%d", &n);

	int idx = 0;
	for(int i = 0; i < n; ++i) {
		int n;
		scanf("%d", &n);
		int idx_begin = idx;
		for(int j = 0; j < n; ++j) {
			scanf("%s %d", testee[idx].ID, &testee[idx].score);
			testee[idx].location = i + 1;
			++idx;
		}
		std::sort(testee + idx_begin, testee + idx, cmp);
		
		testee[idx_begin].local_rank = 1;
		for(int i = 1; i < n; ++i) {
			if(testee[idx_begin + i].score == testee[idx_begin + i - 1].score) {
				testee[idx_begin + i].local_rank = testee[idx_begin + i - 1].local_rank;
			} else {
				testee[idx_begin + i].local_rank = i + 1;
			}
		}
	}
	std::sort(testee, testee + idx, cmp);

	printf("%d\n", idx);
	int rank;
	printf("%s %d %d %d\n", testee[0].ID, rank = 1, testee[0].location, testee[0].local_rank);

	for(int i = 1; i < idx; ++i) {
		if(testee[i].score == testee[i - 1].score) {
			printf("%s %d %d %d\n", testee[i].ID, rank, testee[i].location, testee[i].local_rank);
		} else {
			printf("%s %d %d %d\n", testee[i].ID, rank = i + 1, testee[i].location, testee[i].local_rank);
		}
	}

	
	return 0;
}
