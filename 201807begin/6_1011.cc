///
/// @file    6_1011.cc
/// @author  hzp(haozhipeng2018@163.com)
/// @date    2018-07-12 10:14:39
///

#include <stdio.h>
#define TripleMax(a, b, c) (a > b ? (a > c ? 0 : 2) : (b > c ? 1 : 2))

int main() {


	int mp[3] = {'W', 'T', 'L'};
	double max[3];

	for(int i = 0; i < 3; ++i) {
		double odds[3];
		scanf("%lf%lf%lf", &odds[0], &odds[1], &odds[2]);
		int idx =  TripleMax(odds[0], odds[1], odds[2]);
		max[i] = odds[idx];
		printf("%c ", mp[idx]);
	}

	printf("%.2lf\n", 2 * (max[0] * max[1] * max[2] * 0.65 - 1));

	return 0;
}
