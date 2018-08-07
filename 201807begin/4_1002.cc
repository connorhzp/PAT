 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-11 16:01:17
 ///
 
#include <stdio.h>
#include <math.h>

const double eps = 1e-8;
#define Equ(a, b) (fabs(a - b) < eps)

int main() {

	double arr[1001] = {};

	int n;

	int e;
	double temp;
	int totaln = 0;
	int flag = 0;

	for(int i = 0; i < 2; ++i) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &e);
			if(arr[e] == 0)
				++totaln;
			else
				 flag = 1;
			scanf("%lf", &temp);
			arr[e] += temp;
			if(flag == 1 && Equ(arr[e], 0))
				--totaln;

		}

	}

	printf("%d", totaln);
	for(int i = 1000; i >= 0; --i) {
		if(!Equ(arr[i], 0))
		printf(" %d %.1lf", i, arr[i]);
	}

	printf("\n");

	return 0;
}
