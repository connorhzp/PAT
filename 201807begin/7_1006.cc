 ///
 /// @file    7_1006.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-12 11:42:43
 ///
 
#include <stdio.h>
#include <string.h>


int sectime(int h, int m, int s) {
	return h * 60 * 60 + m * 60 + s;
}

int main() {

	int n;
	scanf("%d", &n);
	char unlockID[16] = {};
	int unlocksectime = 24 * 60 *60;
	char lockID[16] = {};
	int locksectime = 0;

	for(int i = 0; i < n ; ++i) {
		char tempID[16] = {};
		int h, m, s;
		scanf("%s", tempID);
		scanf("%d:%d:%d", &h, &m, &s);
		int tempsectime = sectime(h, m, s);

		if(tempsectime < unlocksectime) {
			unlocksectime = tempsectime;
			strcpy(unlockID, tempID);
		}

		scanf("%d:%d:%d", &h, &m, &s);
		tempsectime = sectime(h, m, s);

		if(tempsectime > locksectime) {
			locksectime = tempsectime;
			strcpy(lockID, tempID);
		}

	}
		
	printf("%s %s\n", unlockID, lockID);

	return 0;
}
