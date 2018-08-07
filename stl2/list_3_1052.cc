 ///
 /// @file    list_3_1052_pra.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-24 20:36:35
 ///
 
#include <iostream>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;

const int maxn = 100010;

struct Node {
	int address;
	int data;
	int pnext;
	bool flag;
} node[maxn];

bool cmp(Node a, Node b) {
	if(a.flag != b.flag)
		return a.flag > b.flag;
	else {
		return a.data < b.data;
	}
}

int main() {
	for(int i = 0; i < maxn; i++) {
		node[i].flag = false;
	}

	int n, phead;
	scanf("%d%d", &n, &phead);
	for(int i = 0; i < n; i++) {
		int address;
		scanf("%d", &address);
		node[address].address = address;
		scanf("%d%d", &node[address].data, &node[address].pnext);
	}
	
	int count = 0;
	for(int p = phead; p != -1; p = node[p].pnext) {
		node[p].flag = true;
		count++;
	}

	sort(node, node + maxn, cmp);

	if(count == 0)
		printf("0 -1\n");
	else
		printf("%d %d\n", count, node[0].address);

	for(int i = 0; i < count; i++) {
		printf("%05d %d ", node[i].address, node[i].data);
		if(i != count - 1)
			printf("%05d\n", node[i + 1].address);
		else
			printf("-1\n");
	}


	return 0;
}
