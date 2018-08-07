 ///
 /// @file    set_1063.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-21 11:46:18
 ///
 
#include <iostream>
#include <set>
using namespace std;
using std::cout;
using std::endl;


const int N = 51;
std::set<int> st[N];

void compare(int x, int y) {
	int totalNum = st[y].size(), sameNum = 0;
	for(set<int>::iterator it = st[x].begin(); it != st[x].end(); ++it) {
		if(st[y].find(*it) != st[y].end()) ++sameNum;
		else totalNum++;
	}
	printf("%.1f%%\n", sameNum * 100.0 / totalNum);
}



int main() {
	int n, k, q, v, st1, st2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &k);
		for(int j = 0; j < k; j++) {
			scanf("%d", &v);
			st[i].insert(v);
		}
	}

	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d%d", &st1, &st2);
		compare(st1, st2);
	}
       
	return 0;
}

