 ///
 /// @file    others_1_1093.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:42:18
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


const int maxn = 100010;

char str[maxn];

int leftNumP[maxn] = {};
int rightNumT = 0;

int main() {

	fgets(str, maxn, stdin);
	int lenstr = strlen(str);

	if(str[0] == 'P')
		leftNumP[0] = 1;
	else
		leftNumP[0] = 0;

	for(int i = 1; i < lenstr; i++) {
		if(str[i] == 'P')
			leftNumP[i] = leftNumP[i - 1] + 1;
		else
			leftNumP[i] = leftNumP[i - 1];
	}

	long long ans = 0;
	for(int i = lenstr - 1; i >= 0; i--) {
		if(str[i] == 'T')
			rightNumT++;
		if(str[i] == 'A')
			ans += leftNumP[i] * rightNumT;
	}

	ans %= 1000000007;

	printf("%lld\n", ans);






	return 0;
}
