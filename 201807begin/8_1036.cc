 ///
 /// @file    8_1036.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-12 15:44:25
 ///
 
#include <stdio.h>
#include <string.h>


int main() {

	int n;
	scanf("%d", &n);

	char fname[15], fcourseID[15];
	int fscore = -1;
	char mname[15], mcourseID[15];
	int mscore = 101;

	for(int i = 0; i < n; ++i) {
		char name[15], courseID[15];
		char gender;
		int score;
		scanf("%s %c%s%d", name, &gender, courseID, &score);
		
		if(gender == 'F' && score > fscore) {
				fscore = score;
				strcpy(fname, name);
				strcpy(fcourseID, courseID);
		}
		if(gender == 'M' && score < mscore) {
				mscore = score;
				strcpy(mname, name);
				strcpy(mcourseID, courseID);
		}
	}
	
	if(fscore == -1)
		printf("Absent\n");
	else
		printf("%s %s\n", fname, fcourseID);

	if(mscore == 101)
		printf("Absent\n");
	else
		printf("%s %s\n", mname, mcourseID);

	if(fscore == -1 || mscore == 101)
		printf("NA\n");
	else
		printf("%d\n", fscore - mscore);


	return 0;
}
