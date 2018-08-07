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
	int nameNum, courseNum;
	scanf("%d%d", &nameNum, &courseNum);
	for(int i = 0; i < nameNum; i++) {
		char str[5];
		scanf("%s", str);
		strcpy(name[i], str);
		int n;
		scanf("%d", &n);
		for(int j = 0; j < n; j++) {
			int c;
			scanf("%d", &c);
			course[c].push_back(i);
		}
	}


	for(int i = 1; i <= courseNum; i++) {
		printf("%d %ld\n", i, course[i].size());
		sort(course[i].begin(), course[i].end(), cmp);
		for(size_t j = 0; j < course[i].size(); j++) {
			printf("%s\n", name[course[i][j]]);
		}

	}
}
