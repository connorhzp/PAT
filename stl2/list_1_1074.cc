 ///
 /// @file    list_1_1074.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-25 09:38:23
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
	int next;
	int order;
} node[maxn];

bool cmp(Node a, Node b) {
	return a.order < b.order;
}


int main() {
	for(int i = 0; i < maxn; i++) {
		node[i].order = maxn;
	}
	int head, n, k;
	scanf("%d%d%d", &head, &n, &k);
	while(n--) {
		int address;
		scanf("%d", &address);
		node[address].address = address;
		scanf("%d%d", &node[address].data, &node[address].next);
	}
	int order = 0;
	int p = head;
	while(p != -1) {
		node[p].order = order++;
		p = node[p].next;
	}

	sort(node, node + maxn, cmp);

	for(int i = 1; i <= order / k; i++) {
		for(int j = 0; j < k - 1; j++) {
			printf("%05d %d %05d\n", node[i * k - 1 - j].address, node[i * k - 1 - j].data, node[i * k - 1 - j - 1].address);
		}
		printf("%05d %d ", node[i * k - k].address, node[i * k - k].data);
		if(i != order / k) {
			printf("%05d\n", node[i * k + k - 1].address);
		} else {
			if(order % k == 0) {
				printf("%d\n", -1);
			} else {
				printf("%05d\n", node[i * k].address);
				int j;
				for(j = 0; j < order % k - 1; j++) {
					printf("%05d %d %05d\n", node[i * k + j].address, node[i * k + j].data, node[i * k + j + 1].address);
				}
				printf("%05d %d %d\n", node[i * k + j].address, node[i * k + j].data, -1);
			}
		}
	}
	return 0;
}
