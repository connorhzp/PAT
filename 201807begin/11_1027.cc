 ///
 /// @file    11_1027.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 10:21:05
 ///
 
#include <stdio.h>

int main() {

	char mp[13] = {'0','1','2','3','4','5','6','7','8','9', 'A', 'B', 'C'};

	int n;
	printf("#");
	for(int i = 0; i < 3; ++i) {
		scanf("%d", &n);
		printf("%c%c", mp[n / 13], mp[n % 13]);
	}


	return 0;
}
