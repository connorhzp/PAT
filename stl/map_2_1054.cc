 ///
 /// @file    map_2_1054.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-21 22:08:13
 ///
 
#include <iostream>
#include <map>
using namespace std;
using std::cout;
using std::endl;


int main() {

	int n, m;
	scanf("%d%d", &m, &n);
	map<int, int> mp;
	for(int i = 0; i < n; i++) {
		for(int i = 0; i < m; i++) {
			int col;
			scanf("%d", &col);
			if(mp.find(col) != mp.end())
				mp[col]++;
			else
				mp[col] = 1;
		}
	}
	
	int col, maxCount = 0;
	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		if(it->second > maxCount) {
			col = it->first;
			maxCount = it->second;
		}
	}
	printf("%d\n", col);

	return 0;
}
