 ///
 /// @file    others_2_1101.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:42:43
 ///
 
#include <iostream>
using std::cout;
using std::endl;

const int maxn = 100010;

int arr[maxn];

int leftMax[maxn];

//int rightMin[maxn];

int main() {
	int n;
	scanf("%d", &n);
	int leftmax = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", arr + i);
		if(leftmax < arr[i]) {
			leftmax = arr[i];
			leftMax[i] = leftmax;
		}
	}

	int ans[maxn];
	int num = 0;
	int rightmin = 1E9;
	for(int i = n - 1; i >= 0; i--) {
		if(arr[i] < rightmin) {
			rightmin = arr[i];
		}
		if(arr[i] == leftMax[i] && arr[i] == rightmin)
			ans[num++] = arr[i];
	}

	printf("%d\n", num);
	if(num == 0)
		printf("\n");
	else {
	printf("%d", ans[num - 1]);
	for(int i = num - 2; i >= 0; i--) {
		printf(" %d", ans[i]);
	}

	printf("\n");
	}

	return 0;
}
