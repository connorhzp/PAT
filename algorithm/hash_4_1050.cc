 ///
 /// @file    hash_4_1050.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:00:09
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


const int maxn = 10010;

char str1[maxn];
char str2[maxn];

bool count[128] = {false};

int main() {
	fgets(str1, maxn, stdin);

	int i = 0;
	do {
		str2[i++] = getchar();
		count[(int)str2[i - 1]] = true;
	} while(str2[i - 1] != '\n');

	int lenstr1 = strlen(str1) - 1;
	for(int i = 0; i < lenstr1; i++) {
		if(count[(int)str1[i]] == false)
			printf("%c", str1[i]);
	}
	printf("\n");




	return 0;
}
