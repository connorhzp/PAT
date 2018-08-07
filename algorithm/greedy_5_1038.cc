 ///
 /// @file    greedy_5_1038.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:26:41
 ///
 
#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;


const int maxn = 10010;

std::string str[maxn];

bool cmp(std::string a, std::string b) {
	return a + b < b + a;
}

int main() {
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> str[i];
	}

	std::sort(str, str + n, cmp);

	
	bool flag = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < (int)str[i].length(); j++) {
			if(str[i][j] == '0' && flag == 0)
				continue;
			else
				flag = 1;
				putchar(str[i][j]);

		}
	}

	if(flag == 0)
		printf("%d\n", 0);
	else
		printf("\n");
	

	return 0;
}
