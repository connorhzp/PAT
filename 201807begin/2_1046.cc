 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-11 11:03:35
 ///
 
#include <stdio.h>
#include <math.h>
#define MIN(a, b) (a < b ? a : b)



int main() {

	int n;
	int sum = 0;

	scanf("%d", &n);

	int ref[n + 1];
	ref[1] = 0;

	for(int i = 2; i < n + 1; ++i) {
		scanf("%d", &ref[i]);
		sum += ref[i];
		ref[i] = sum;
	}

	int temp;
	scanf("%d", &temp);
	sum += temp;

	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		int begin, end;
		scanf("%d%d", &begin, &end);
		printf("%d\n", MIN((int)fabs((double)ref[begin] - (double)ref[end]), sum - (int)fabs((double)ref[begin] - (double)ref[end])));
	}

	return 0;
}
