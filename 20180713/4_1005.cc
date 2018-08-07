 ///
 /// @file    4_1005.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 16:13:39
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

int main() {

	char arr[101];
	char mp[10][6] = {"zero", "one", "two", "three", "four"\
		, "five", "six", "seven", "eight", "nine"};

	scanf("%s", arr);
	int arrlen = strlen(arr);
	int sum = 0;
	for(int i = 0; i < arrlen; ++i) {
		sum += arr[i] - 48;
	}

	char res[4] = {};
	int reslen = 0;
	for(; sum; sum /= 10) {
		res[reslen] = sum % 10;
		++reslen;
	}

	printf("%s", mp[(int)res[reslen - 1]]);
	for(int i = reslen - 2; i >= 0; --i) {
		printf(" %s", mp[(int)res[i]]);
	}
	

	printf("\n");
	return 0;
}
