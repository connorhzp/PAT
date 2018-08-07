 ///
 /// @file    greedy_1_1070.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:23:51
 ///
 
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

const int maxn = 1010;

struct MoonCake {
	double inventory;
	double totalPrice;
	double unitPrice;
} mk[maxn];

bool cmp(MoonCake a, MoonCake b) {
	return a.unitPrice > b.unitPrice;
}

int main() {
	
	int n;
	double sum;

	scanf("%d%lf", &n, &sum);
	for(int i = 0; i < n; i++) {
		scanf("%lf", &mk[i].inventory);
	}

	for(int i = 0; i < n; i++) {
		scanf("%lf", &mk[i].totalPrice);
		mk[i].unitPrice = mk[i].totalPrice / mk[i].inventory;
	}

	std::sort(mk, mk + n, cmp);

	double maxProfile = 0;


	for(int i = 0; i < n; i++) {
		if(mk[i].inventory < sum) {
			sum -= mk[i].inventory;
			maxProfile += mk[i].totalPrice;
		} else {
			maxProfile += mk[i].unitPrice * sum;
			break;
		}
	}

	printf("%.2f\n", maxProfile);



	return 0;
}
