 ///
 /// @file    two_pointors_3_1029.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 19:40:24
 ///
 
#include <iostream>
using std::cout;
using std::endl;


const int maxn = 400010;

int arr[maxn];

void merge(int A[], int L1, int R1, int L2, int R2) {
	int i = L1, j = L2;
	int temp, index = -1;
	while(i <= R1 && j <= R2) {
		if(A[i] <= A[j]) {
			temp = A[i++];
			index++;
		} else {
			temp = A[j++];
			index++;
		}
		if(index == (R2 - L1) / 2) {
			printf("%d\n", temp);
			return;
		}
	}
	if(i <= R1)
		printf("%d\n", arr[i]);
	else
		printf("%d\n", arr[j]);


}


int main() {
	int n1, n2;
	scanf("%d", &n1);
	for(int i = 0; i < n1; i++) {
		scanf("%d", arr + i);
	}
	scanf("%d", &n2);
	for(int i = 0; i < n2; i++) {
		scanf("%d", arr + n1 + i);
	}

	merge(arr, 0, n1 - 1, n1, n1 + n2 - 1);

	return 0;
}
