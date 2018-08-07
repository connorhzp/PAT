 ///
 /// @file    greedy_4_1067.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:26:16
 ///
 
#include <iostream>
using std::cout;
using std::endl;


const int maxn = 100010;

int num[maxn];
int mp[maxn];


int main() {

	int n;
	scanf("%d", &n);
	int pzero;
	int left = n - 1;
	for(int i = 0; i < n; i++) {
		scanf("%d", num + i);
		if(num[i] == 0)
			pzero = i;
		if(num[i] == i && i != 0)
			left--;
		mp[num[i]] = i;
	}

	int pmin = 1;
	int steps = 0;
	while(left) {
		if(pzero == 0) {
			while(num[pmin] == pmin)
				pmin++;

			std::swap(num[pzero], num[pmin]);
			pzero = pmin;
			mp[num[0]] = 0;
			steps++;
		} else {
			std::swap(num[pzero], num[mp[pzero]]);
			steps++;
			left--;
			pzero = mp[pzero];
		}

	}


	printf("%d\n", steps);

	return 0;
}
