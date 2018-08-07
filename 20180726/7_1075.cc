 ///
 /// @file    7_1075.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 21:05:42
 ///
 
#include <iostream>
using std::cout;
using std::endl;

struct Student {
	int rank;
	int id;
	int total_score;
	int problem_score[7];
	int print_or_not;
	int full_score_count;
};

bool cmp(Student a, Student b) {
	if(a.total_score != b.total_score)
		return a.total_score > b.total_score;
	else if(a.full_score_count != b.full_score_count)
		return a.full_score_count > b.full_score_count;
	else
		return a.id < b.id;
}



int main() {

	int n, k, m; 
	scanf("%d%d%d", &n, &k, &m);
	int full_score[7];
	scanf("%d%d%d%d%d%d", &full_score[1],&full_score[2],&full_score[3],&full_score[4],&full_score[5], &full_score[6]);

	Student stu[n + 1];

	for(int i = 0; i < m; ++i) {
		int id, idx;
		scanf("%d%d", &id, &idx);
		scanf("%d", &stu[id].problem_score[idx]);
		stu[id].id = id;
	}











	return 0;
}
