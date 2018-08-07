 ///
 /// @file    6_1077.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-14 19:37:43
 ///
 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;


int main() {

	int n;
	scanf("%d", &n);
	getchar();
	char str[100][257];

	for(int i = 0; i < n; ++i) {
//		scanf("%s", str[i]);
		fgets(str[i], 258, stdin);
		int len = strlen(str[i]);
		str[i][len - 1] = 0;
		--len;
		for(int j = 0; j < len / 2; ++j) {
			char temp = str[i][j];
			str[i][j] = str[i][len - 1 - j];
			str[i][len - 1 - j] = temp;
		}
	}

	int minlen = 257;
	for(int i = 0; i < n; ++i) {
		int len = strlen(str[i]);
		if(len < minlen)
			minlen = len;
	}

	int resj = 0;
	for(int j = 0; j < minlen; ++j) {
		for(int i = 1; i < n; ++i) {
			if(str[0][j] !=  str[i][j]) {
				resj = j;
				goto end;
			}
		}
	}
end:

	if(!resj)
		printf("nai\n");
	else {
		str[0][resj] = 0;
		for(int i = 0; i < resj / 2; ++i) {
			char temp = str[0][i];
			str[0][i] = str[0][resj - 1 - i];
			str[0][resj - 1 - i] = temp;
		}
		printf("%s\n", str[0]);
	}
	

	return 0;
}
