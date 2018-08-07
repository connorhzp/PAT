 ///
 /// @file    vector_2_1047.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-23 09:28:59
 ///
 
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;

const int maxn = 40010;
const int maxc = 2510;

char name[maxn][5];
vector<int> course[maxc];

bool cmp(int a, int b) {
	return strcmp(name[a], name[b]) < 0;
}

int main() {
	int n, k, c, courseID;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++) {
		scanf("%s %d", name[i], &c);
		for(int j = 0; j < c; j++) {
			scanf("%d", &courseID);
			course[courseID].push_back(i);
		}
	}

	for(int i = 1; i <= k; i++) {
		printf("%d %ld\n", i, course[i].size());
		sort(course[i].begin(), course[i].end(), cmp);
		for(size_t j = 0; j < course[i].size(); j++) {
			printf("%s\n", name[course[i][j]]);
		}
	}

	return 0;
}
