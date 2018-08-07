 ///
 /// @file    hash_5_1048.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:00:36
 ///
 
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;



const int maxn = 100010;

const int maxm = 1010;

int coins[maxn];

int count[maxm] = {};


int main() {
	int n, sum;
	scanf("%d%d", &n, &sum);

	for(int i = 0; i < n; i++) {
		scanf("%d", coins + i);
		count[coins[i]]++;
	}

	std::sort(coins, coins + n);

	int i;
	for(i = 0; i < n; i++) {
		if(coins[i] >= sum / 2.0)
			break;

		if(count[sum - coins[i]] != 0) {
			printf("%d %d\n", coins[i], sum - coins[i]);
			break;
		}
	}

	if(coins[i] >= sum / 2.0) {
		if(coins[i] * 2 == sum && count[coins[i]] > 1)
			printf("%d %d\n", coins[i], coins[i]);
		else  
			printf("No Solution\n");

	}




	return 0;
}
