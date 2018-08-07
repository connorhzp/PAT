 ///
 /// @file    list_2_1032_pra.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-24 20:35:23
 ///
 

#include <iostream>
using std::cout;
using std::endl;



const int maxn = 100010;

struct Node {
	char data;
	int pnext;
	bool flag;
} node[maxn];




int main() {

	for(int i = 0; i < maxn; i++) {
		node[i].flag = false;
	}

	int phead1, phead2, n;
	scanf("%d%d%d", &phead1, &phead2, &n);
	for(int i = 0; i < n; i++) {
		int address;
		scanf("%d", &address);
		scanf(" %c %d", &node[address].data, &node[address].pnext);
	}

	for(int p = phead1; p != -1; p = node[p].pnext) {
		node[p].flag = true;
	}

	int p;
	for(p = phead2; p != -1; p = node[p].pnext) {
		if(node[p].flag == true) {
			break;
		}
	}

	if(p == -1) {
		printf("-1\n");
	} else {
		printf("%05d\n", p);
	}

	return 0;
}
