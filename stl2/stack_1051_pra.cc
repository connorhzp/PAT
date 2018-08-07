 ///
 /// @file    stack_1051_pra.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-24 15:11:26
 ///
 
#include <iostream>
#include <stack>
using namespace std;
using std::cout;
using std::endl;


const int maxn = 1010;

int arr[maxn];
stack<int> st;

int main() {
	int m, n, T;
	scanf("%d%d%d", &m, &n, &T);
	while(T--) {
		while(!st.empty()) {
			st.pop();
		}
		for(int i = 1; i <= n; i++) {
			scanf("%d", &arr[i]);
		}

		int current = 1;
		bool flag = true;
		for(int i = 1; i <=n; i++) {
			st.push(i);
			if((int)st.size() > m) {
				flag = false;
				break;
			}
			while(!st.empty() && st.top() == arr[current]) {
				st.pop();
				current++;
			}
		}
		if(st.empty() == true && flag == true) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}

	}
	return 0;
}
