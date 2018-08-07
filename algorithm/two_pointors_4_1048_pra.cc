 ///
 /// @file    two_pointors_4_1048.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:40:44
 ///
 
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
using std::cout;
using std::endl;

const int maxn = 100010;

int a[maxn];

void twoPoiners(int n, int m) {
	int i = 0, j = n - 1;
	while(i < j) {
		if(a[i] + a[j] == m) {
			break;
		} else if(a[i] + a[j] < m) {
			i++;
		} else {
			j--;
		}
	}
	if(i < j) {
		printf("%d %d\n", a[i], a[j]);
	} else {
		printf("No Solution\n");
	}
}

int main() {
	
	int n, m;
	scanf("%d%d", &n, &m);

	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);

	twoPoiners(n, m);


	return 0;
}
