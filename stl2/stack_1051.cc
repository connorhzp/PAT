 ///
 /// @file    stack_1051.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-24 16:52:00
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
		int num, n_num = 1;
		scanf("%d", &num);
		bool flag = true;
		while(st.empty() != true) {
			st.pop();
		}
		for(int i = 1; i <= n; i++) {
			st.push(i);
			if((int)st.size() > m) {
				flag = false;
				break;
			}

			while(st.empty() != true && num == st.top()) {
				st.pop();
				if(n != n_num) {
					scanf("%d", &num);
					n_num++;
				}
			}
		}

		if(flag && st.empty())
			printf("%s\n", "YES");
		else {
			printf("%s\n", "NO");
			while(n_num != n) {
				scanf("%d", &num);
				n_num++;
			}
				
		}
			


	}

	return 0;
}
