 ///
 /// @file    hash_2_1092.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 18:59:03
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


const int maxn = 1010;

struct Str {
	char color;
	bool flag;
} str1[maxn];

char str2[maxn];


int main() {

	int i;
	for(i = 0; ; i++) {
		str1[i].color = getchar();
		str1[i].flag = false;
		if(str1[i].color == '\n')
			break;
	}

	scanf("%s", str2);
	int lenstr2 = strlen(str2);

	int numMiss = 0;
	int numColor = i;

	for(int k = 0; k < lenstr2; k++) {
		i = numColor;
		while(i--) {
			if(str2[k] == str1[i].color && str1[i].flag == false) {
				str1[i].flag = true;
				break;
			} 
		}
		if(i == -1) {
			numMiss++;
		}
	}

	int numExtra = 0;
	for(int i = 0; i < numColor; i++) {
		if(str1[i].flag == false)
			numExtra++;
	}

	if(numMiss != 0) {
		printf("%s %d\n", "No", numMiss);
	} else {
		printf("%s %d\n", "Yes", numExtra);
	}


	return 0;
}
