 ///
 /// @file    3_1001.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 16:13:14
 ///
 
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;


int main() {

	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a + b;

	char arr[8];
	if(c < 0) {
		putchar('-');
		c = -c;
	}
	sprintf(arr, "%d", c);

	int arrlen = strlen(arr);



	int n = arrlen / 3;
	int npre = arrlen % 3;
	int k;
	for(k = 0; k < npre; ++k) {
		putchar(arr[k]);
	}
	for(int i = 0; i < n; ++i) {
		if(k)
			putchar(',');

		for(int i = 0; i < 3; ++i) {
			putchar(arr[k]);
			++k;
		}
	}
	printf("\n");


	return 0;
}

