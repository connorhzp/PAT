///
/// @file    2_1073.cc
/// @author  hzp(haozhipeng2018@163.com)
/// @date    2018-07-13 16:12:08
///

#include <iostream>
#include <string.h>
using std::cout;
using std::endl;


int main() {



	char integer, decimal[10000] = {'0'};
	char intsign, expsign;
	int exp;

	scanf("%c%c.%sE%c%d", &intsign, &integer, decimal, &expsign, &exp);
	int declen = strlen(decimal);
	//if(intsign == '0' || integer == '0') {
	//	putchar('0');
	//	goto end;
	//}
	for(int i = 0; i < declen; ++i) {
		if(decimal[i] == 'E') {
			declen = i;
			sscanf(&decimal[i + 1], "%c%d", &expsign, &exp);
			memset(&decimal[i], '0', 10000 - i);
			break;
		}
	}

	if(expsign == '+') {
		if(intsign == '-')
			printf("%c%c", intsign, integer);
		else
			printf("%c", integer);
		for(int i = 0; i < exp; ++i) {
			putchar(decimal[i]);
		}
		if(exp < declen) {
			putchar('.');
			for(int i = exp; i < declen; ++i) {
				putchar(decimal[i]);
			}
		}

	} else {
		if(intsign == '-')
			printf("%c%c.", intsign, '0');
		else
			printf("%c.", '0');
		for(int i = 0; i < exp - 1; ++i) {
			putchar('0');
		}
		putchar(integer);
		for(int i = 0; i < declen; ++i) {
			putchar(decimal[i]);
		}
	}
//end:
	printf("\n");




	return 0;
}
