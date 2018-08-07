 ///
 /// @file    6_1077.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 16:14:04
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


int main() {

	int n;
	scanf("%d", &n);

	char str[257];
	scanf("%s", str);

	int len = strlen(str);
	for(int i = 0; i < n - 1; ++i) {
		char tempstr[257];
		scanf("%s", tempstr);
		for(int i = len - 1; i >= 0; --i) {
			if(tempstr[i] != str[i]) {


			}
		}
	}

	return 0;
}
