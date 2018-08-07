 ///
 /// @file    9_1031.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-12 19:08:30
 ///
 
#include <stdio.h>
#include <string.h>


int main() {

	char arr[81];
	scanf("%s", arr);
	int len = strlen(arr);

	int n1 = (len + 2) / 3;
	int n2 = (len + 2) % 3 + n1;


	for(int i = 0; i < n1 - 1; ++i) {

		printf("%c%*c\n", arr[i], n2 - 1, arr[len - 1 -i]);
	}

	for(int i = 0; i < n2; ++i) {
		printf("%c", arr[n1 - 1 + i]);
	}
	
	printf("\n");

	return 0;
}
