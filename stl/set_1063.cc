 ///
 /// @file    set_1063.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-21 12:53:44
 ///
 
#include <iostream>
#include <set>
using namespace std;
using std::cout;
using std::endl;

const int N = 51;
set<int> st[N];

int compare(int x, int y) {
	int totalNum = st[y].size(), sameNum = 0;
	for(set<int>::iterator it = st[x].begin(); it != st[x].end(); it++) {
		if(st[y].find(*it) != st[y].end()) 
			sameNum++;
		else {
			totalNum++;
		}
	}
	printf("%.1f%%\n", sameNum * 100.0 / totalNum);

	return 0;
}


int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		int m;
		scanf("%d", &m);
		for(int j = 0; j < m; j++) {
			int v;
			scanf("%d", &v);
			st[i].insert(v);
		}
	}
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		compare(x, y);
	}

	return 0;
}
