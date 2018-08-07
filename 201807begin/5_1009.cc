 ///
 /// @file    5_1009.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-11 17:58:14
 ///
 
#include <stdio.h>

int main() {

	double begin[1001] = {};
	double end[2001] = {};

	int n;
	scanf("%d", &n);
	int e;
	for(int i = 0; i < n; ++i) {
		scanf("%d", &e);
		scanf("%lf", &begin[e]);
	}

	int count = 0;
	scanf("%d", &n);
	double temp;
	for(int i = 0; i < n; ++i) {
		scanf("%d", &e);
		scanf("%lf", &temp);
		for(int i = 0; i < 1001; ++i) {
			int flag = 0;
			if(begin[i]) {
				if(!end[e + i])
					++count;
				else
					flag = 1;
				
				end[e + i] += begin[i] * temp;
				if(flag && !end[e + i])
					--count;
			}
		}
	}


	printf("%d", count);

	for(int i = 2000; i >= 0; --i) {
		if(end[i]) {
			printf(" %d %.1lf", i, end[i]);
		}
	}


	return 0;
}
