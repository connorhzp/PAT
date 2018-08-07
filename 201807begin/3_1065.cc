 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-11 12:42:48
 ///
 
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	long long a, b, c, d;
	for(int i = 1; i < n + 1; ++i) {
		scanf("%lld%lld%lld", &a, &b, &c);
		d = a + b;
			if(a > 0 && b > 0 && d  < 0) {
				printf("Case #%d: true\n", i);
				continue;
			}
			if(a < 0 && b < 0 && d  >= 0) {
				printf("Case #%d: false\n", i);
				continue;
			}
			d > c ? printf("Case #%d: true\n", i) : printf("Case #%d: false\n", i);
	}
	return 0;
}
