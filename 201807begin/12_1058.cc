 ///
 /// @file    12_1058.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 10:39:05
 ///
 
#include <stdio.h>


int main() {
	

	int a[3], b[3], c[3];

	scanf("%d.%d.%d %d.%d.%d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);


	int temp = (a[2] + b[2]);
	c[2] = temp % 29;
	int temp2;
	if(temp / 29) 
		temp2 = (a[1] + b[1] + 1); 
	else
		temp2 = a[1] + b[1];

	c[1] = temp2 % 17;
	if(temp2 / 17) 
		c[0] = a[0] + b[0] + 1;
	else
		c[0] = a[0] + b[0];
	
	
	printf("%d.%d.%d\n", c[0], c[1], c[2]);


	return 0;
}
