 ///
 /// @file    5_1035.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-13 16:13:51
 ///
 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


int main() {

	int n;
	scanf("%d", &n);
	struct {
		char username[11];
		char password[11];
	} arr[n];

	for(int i = 0; i < n; ++i) {
		scanf("%s%s", arr[i].username, arr[i].password);
	}

	int pos[n];
	int count = 0;
	for(int i = 0; i < n; ++i) {
		size_t n = strlen(arr[i].password);

		
		for(size_t j = 0, flag = 0; j < n; ++j) {
			if(arr[i].password[j] == '1') {
				if(!flag) {
					pos[count++] = i;
					flag =1;
				}
				arr[i].password[j] = '@';
				continue;
			}
			if(arr[i].password[j] == '0') {
				if(!flag) {
					pos[count++] = i;
					flag =1;
				}
				arr[i].password[j] = '%';
				continue;
			}
			if(arr[i].password[j] == 'l') {
				if(!flag) {
					pos[count++] = i;
					flag =1;
				}
				arr[i].password[j] = 'L';
				continue;
			}
			if(arr[i].password[j] == 'O') {
				if(!flag) {
					pos[count++] = i;
					flag =1;
				}
				arr[i].password[j] = 'o';
				continue;
			}
		}
	}

	if(!count) {
		if(n == 1)
			printf("There is %d account and no account is modified\n", n);
		else
			printf("There are %d accounts and no account is modified\n", n);
	} else {
		printf("%d\n", count);
		for(int i = 0; i < count; ++i) {
			printf("%s %s\n", arr[pos[i]].username, arr[pos[i]].password);
		}
	}




	return 0;
}
