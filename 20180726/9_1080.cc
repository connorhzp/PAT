 ///
 /// @file    9_1080.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 21:06:24
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;


struct Student {
	int id;
	int gradeE;
	int gradeI;
	int totalGrade;
	vector<int> prefer;
};

bool cmp(Student a, Student b) {
	if(a.totalGrade != b.totalGrade) 
		return a.totalGrade > b.totalGrade;
	else
		return a.gradeE > b.gradeE;
}
int main() {
	int nstu, nschool, nprefer;
	scanf("%d%d%d", &nstu, &nschool, &nprefer);
	int quota[nschool];

	for(int i = 0; i < nschool; i++) {
		scanf("%d", quota + i);
	};

	vector<Student> stu;

	for(int i = 0; i < nstu; i++) {
		stu[i].id = i;
		scanf("%d%d", &stu[i].gradeE, &stu[i].gradeI);
		stu[i].totalGrade = stu[i].gradeE + stu[i].gradeI;
		for(int j = 0; j < nprefer; j++) {
			scanf("%d", &stu[i].prefer[j]);
		}
	}

	sort(&stu[0], &stu[nstu - 1] + 1, cmp);

	int stuAdmitted[nschool][10010];

	int preferIdx = 0, stuAdmIdx = 0;
	for(int i = 0; i < nstu; i++) {
		for(int j = 0; j < nprefer; j++) {
			if(quota[stu[i].prefer[preferIdx]] != 0) {
				stuAdmitted[stu[i].prefer[preferIdx++]][stuAdmIdx++] = stu[i].id;
				quota[stu[i].prefer[preferIdx - 1]]--;
				break;
			} else if();
		}

		}
	}




	return 0;
}
