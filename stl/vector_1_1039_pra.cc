 ///
 /// @file    cector_1_1039.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-23 09:28:44
 ///
 
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;


const int N = 40010;
const int M = 26 * 26 * 26 * 10 + 1;
vector<int> selectCourse[M];

int getID(char name[]) {
	int id = 0;
	for(int i = 0; i < 3; i++) {
		id = id * 26 + (name[i] - 'A');
	}
	id = id * 10 + (name[3] - '0');

	return id;
}

int main() {
	char name[5];
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < k; i++) {
		int course, x;
		scanf("%d%d", &course, &x);
		for(int j = 0; j < x; j++) {
			scanf("%s", name);
			int id = getID(name);
			selectCourse[id].push_back(course);
		}
	}
	for(int i = 0; i < n; i++) {
			scanf("%s", name);
			int id = getID(name);
			sort(selectCourse[id].begin(), selectCourse[id].end());
			printf("%s %ld", name, selectCourse[id].size());
			for(size_t j = 0; j < selectCourse[id].size(); j++) {
				printf(" %d", selectCourse[id][j]);
			}
			printf("\n");
	}
	

	return 0;
}
