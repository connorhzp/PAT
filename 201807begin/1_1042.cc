 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-10 12:49:38
 ///
 
#include <stdio.h>
#define N 54

char mp[5] = {'S', 'H', 'C', 'D', 'J'};
int start[N+1], ref[N+1], end[N+1];

int main() {
	int n;
	scanf("%d", &n);


	for(int i = 1; i < N+1; ++i) {
		start[i] = i;
	}

	for(int i = 1; i < N+1; ++i) {
		scanf("%d", &ref[i]);
	}

	for(int i = 0; i < n; ++i) {
		for(int i = 1; i < N+1; ++i) {
			end[ref[i]] = start[i];
		}
		for(int i = 1; i < N+1; ++i) {
			start[i] = end[i];
		}
	}

	printf("%c%d", mp[(start[1]-1) / 13], (start[1] - 1) % 13 + 1);
	for(int i = 2; i < N+1; ++i) {
		putchar(' ');
		printf("%c%d", mp[(start[i]-1) / 13], (start[i] - 1) % 13 + 1);
	}



	return 0;
}
