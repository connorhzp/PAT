 ///
 /// @file    vector_1_1039.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-23 15:01:28
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;

const int N = 26 * 26 * 26 * 10;
vector<int> nameIDtoCourses[N];


int getID(char* name) {
	int res = 0;
	int i = 0;
	for(; i < 3; i++) {
		res = res * 26 + (name[i] - 'A');
	}
	res = res * 10 + (name[i] - '0');
	return res;
}


int main() {
	int nq, n;
	scanf("%d%d", &nq, &n);
	for(int i = 0; i < n; i++) {
		int courseID, m;
		scanf("%d%d", &courseID, &m);
		for(int i = 0; i < m; i++) {
			char name[5];
			scanf("%s", name);
			nameIDtoCourses[getID(name)].push_back(courseID);;
		}
	}

	for(int i = 0; i < nq; i++) {
		char name[5];
		scanf("%s", name);
		int id = getID(name);
		int m = nameIDtoCourses[id].size();
		printf("%s %d", name, m);
		sort(nameIDtoCourses[id].begin(), nameIDtoCourses[id].end());
		for(int i = 0; i < m; i++) {
			printf(" %d", nameIDtoCourses[id][i]);
		}
		printf("\n");
	}

	return 0;
}
