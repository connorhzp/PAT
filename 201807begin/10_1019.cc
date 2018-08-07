 ///
 /// @file    10_1019.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-12 20:15:56
 ///
 

#include <stdio.h>

int main() {

	int n, b;
	scanf("%d%d", &n, &b);

	int arr[30];
	int digit = 0;

	if(!n)
		arr[0] = 0, ++digit;
	for(; n; n /= b) {
		arr[digit++] = n % b;
	}

	for(int i = 0; i < (digit + 1) / 2; ++i) {
		if(arr[i] != arr[digit - 1 - i])
			goto end;	
	}

	printf("Yes\n");
	printf("%d", arr[digit - 1]);
	for(int i = digit - 2; i >= 0; --i)
		printf(" %d", arr[i]);
	printf("\n");
	return 0;
end:
	printf("No\n");
	printf("%d", arr[digit - 1]);
	for(int i = digit - 2; i >= 0; --i)
		printf(" %d", arr[i]);
	printf("\n");
	return 0;
}
