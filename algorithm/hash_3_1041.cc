 ///
 /// @file    hash_3_1041.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 18:59:34
 ///
 
#include <iostream>
using std::cout;
using std::endl;


const int maxn = 100010;
const int maxm = 10010;

int arr[maxn];
int count[maxm] = {};

int main() {
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%d", arr + i);
		count[arr[i]]++;
	}

	int i;
	for(i = 0; i < n; i++) {
		if(count[arr[i]] == 1) {
			break;
		}
	}

	if(i == n)
		printf("None\n");
	else
		printf("%d\n", arr[i]);




	return 0;
}
