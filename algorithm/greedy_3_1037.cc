 ///
 /// @file    greedy_3_1037.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:25:47
 ///
 
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

const int maxn = 100010;

int coupons[maxn];
int products[maxn];

int main() {

	int nc;
	scanf("%d", &nc);
	for(int i = 0; i < nc; i++) {
		scanf("%d", &coupons[i]);
	}
	int np;
	scanf("%d", &np);
	for(int i = 0; i < np; i++) {
		scanf("%d", &products[i]);
	}

	std::sort(coupons, coupons + nc);
	std::sort(products, products + np);

	int monney = 0;

	for(int i = 0; i < std::min(nc, np); i++) {
		if(coupons[i] > 0 || products[i] > 0)
			break;
		monney += coupons[i] * products[i];
	}
	for(int i = nc - 1, j = np - 1; i >= 0 && j >= 0; i--, j--) {
		if(coupons[i] < 0 || products[j] < 0)
			break;
		monney += coupons[i] * products[j];
	}

	printf("%d\n", monney);


	return 0;
}
