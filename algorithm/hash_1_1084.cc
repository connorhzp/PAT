 ///
 /// @file    hash_1_1084.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 18:56:41
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

const int maxn = 100;
const int maxm = 128;

bool isPrint[maxm] = {false};

char str1[maxn];
char str2[maxn];

int main() {
	fgets(str1, 100, stdin);
	fgets(str2, 100, stdin);
	int lenstr1 = strlen(str1);
	int lenstr2 = strlen(str2);

	for(int i = 0; i < lenstr1; i++) {
		if(str1[i] >= 'a' && str1[i] <= 'z')
			str1[i] -= 32;
		int j;
		for(j = 0; j < lenstr2; j++) {
			if(str2[j] >= 'a' && str2[j] <= 'z')
				str2[j] -= 32;
			if(str1[i] == str2[j])
				break;
		}
		if(j == lenstr2 && isPrint[(int)str1[i]] == false) {
			printf("%c", str1[i]);
			isPrint[(int)str1[i]] = true;
		}
	}


	printf("\n");
	return 0;
}
