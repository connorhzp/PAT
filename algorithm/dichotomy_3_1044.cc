 ///
 /// @file    dichotomy_3_1044.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:37:20
 ///
 
#include <iostream>
using std::cout;
using std::endl;

const int maxn = 100010;
const int maxInt = 0x7fffffff;

int arrsum[maxn];

int lower_bound(int left, int right, int x) {
	if(arrsum[right] < x)
		return -1;
	while(left < right) {
		int mid = (left + right) / 2;
		if(x <= arrsum[mid])
			right = mid;
		else
			left = mid + 1;
	}
		return left;
}

int main() {
	int n, sum;
	scanf("%d%d", &n, &sum);
	for(int i = 1; i <= n; i++) {
		scanf("%d", arrsum + i);
		arrsum[i] += arrsum[i - 1];
	}


	int minInterval = arrsum[n];
	for(int i = 1; i <= n; i++) {

		if(lower_bound(i, n, arrsum[i - 1] + sum) == -1)
			break;
		int tempSum = arrsum[lower_bound(i, n, arrsum[i - 1] + sum)];
		if((tempSum - (arrsum[i - 1] + sum)) < minInterval)
					minInterval = (tempSum - (arrsum[i - 1] + sum));
	}

	for(int i = 1; i <= n; i++) {
			int tempIdx = lower_bound(i, n, arrsum[i - 1] + sum + minInterval);
			if(tempIdx == -1)
				break;
			if(arrsum[tempIdx] != arrsum[i - 1] + sum + minInterval)
				continue;
			printf("%d-%d\n", i, tempIdx);
	}



	return 0;
}
