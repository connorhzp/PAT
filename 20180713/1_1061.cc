 ///
 /// @file    1_1061.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 15:57:53
 ///
 
#include <stdio.h>

int main() {
	
	char mp1[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	char mp2[24];

	for(int i = 0; i < 10; ++i) {
		mp2[i] = i;
	}
	for(int i = 10; i < 24; ++i) {
		mp2[i] = 'A' + i - 10;
	}
	
	char str1[61];
	char str2[61];

	scanf("%s%s", str1, str2);
	int flag = 0;
	for(int i = 0; str1[i] && str2[i]; ++i) {
		if(flag == 0 && str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G') {
				printf("%s ", mp1[str1[i] - 'A']);
				flag = 1;
				continue;
		}
		if(flag == 1 && str1[i] == str2[i] &&\
		((str1[i] >= '0' && str1[i] <= '9') || (str1[i] >= 'A' && str1[i] <= 'N'))) {
			for(int j = 0; j < 24; ++j) {
				if(mp2[j] == str1[i]) {
					printf("%2d:", j);
					break;
				}
			}
		}
	}
	
	scanf("%s%s", str1, str2);
	for(int i = 0; str1[i] && str2[i]; ++i) {
		if(str1[i] == str2[i] &&\
		((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z'))) {
			printf("%02d\n", i);
			break;
		}
	}

	


	return 0;
}
