 ///
 /// @file    list_4_1097_pra.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-24 20:37:12
 ///
 
#include <iostream>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;

const int maxn = 100010;
const int maxt = 10010;

struct Node {
	int address;
	int data;
	int pnext;
	int order;
} node[maxn];

int table[maxt] = {false};

bool cmp(Node a, Node b) {
	return a.order < b.order;
}

int main() {
	for(int i = 0; i < maxn; i++) {
		node[i].order = maxn * 2;
	}

	int phead, n;
	scanf("%d%d", &phead, &n);

	for(int i = 0; i < n; i++) {
		int address;
		scanf("%d", &address);
		node[address].address = address;
		scanf("%d%d", &node[address].data, &node[address].pnext);
	}

	int countKept = 0, countRemoved = 0;
	for(int p = phead; p != -1; p = node[p].pnext) {
		if(table[abs(node[p].data)] == false) {
			table[abs(node[p].data)] = true;
			node[p].order = countKept++;
		} else {
			node[p].order = maxn + countRemoved++;
		}
	}

	sort(node, node + maxn, cmp);

	int i;
	for(i = 0; i < countKept - 1; i++) {
		printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
	}
	printf("%05d %d -1\n", node[i].address, node[i].data);

	int count = countKept + countRemoved;
	for(i = countKept; i < count - 1; i++) {
		printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
	}
	printf("%05d %d -1\n", node[i].address, node[i].data);


	return 0;
}
