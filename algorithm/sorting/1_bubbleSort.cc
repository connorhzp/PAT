 ///
 /// @file    1_bubbleSort.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-30 11:58:44
 ///
 
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;



void bubbleSort() {//int arr[], int n) {
	int a[10] = {3, 1, 4, 5, 2};
	for(int i = 1; i <= 4; i++) {
		for(int j = 0; j < 5 - i; j++) {
			if(a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}

void selectSort(int arr[], int n) {
	for(int i = 1; i <= n; i++) {
		int k = i;
		for(int j = i; j <= n; j++) {
			if(arr[j] < arr[k]) {
				k = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;

	}
}



void insertSort(int arr[], int n) {
	for(int i = 2; i <= n; i++) {
		int temp = arr[i], j = i;
		while(j > 1 && temp < arr[j - 1]) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = temp;
	}
}

int merge(int A[], int B[], int C[], int n, int m) {
	int i = 0, j = 0, index = 0;
	while(i < n && j < m) {
		if(A[i] <= B[j]) {
			C[index++] = A[i++];
		} else {
			C[index++] = B[j++];
		}
	}
	while(i < n) 
		C[index++] = A[i++];
	while(j < m)
		C[index++] = B[j++];


	return index;
}
const int maxn = 100;
void merge(int A[], int L1, int R1, int L2, int R2) {
	int i = L1, j = L2;
	int temp[maxn], index = 0;
	while(i <= R1 && j <= R2) {
		if(A[i] <= A[j]) {
			temp[index++] = A[i++];
		} else {
			temp[index++] = A[j++];
		}
	}
	while(i <= R1) 
		temp[index++] = A[i++];
	while(j <= R2)
		temp[index++] = A[j++];
	for(i = 0; i < index; i++) {
		A[L1 + i] = temp[i];
	}
}
void mergeSort(int A[], int left, int right) {
	if(left < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid + 1, right);
		merge(A, left, mid, mid + 1, right);
	}
}
void mergeSort(int A[], int n) {
	for(int step = 2; step / 2 < n; step *= 2) {
		for(int i = 1; i <= n; i += step) {
			int mid = i + step / 2 - 1;
			if(mid + 1 <= n) {
				merge(A, i, mid, mid + 1, std::min(i + step - 1, n));
			}
		}
	}
}
void mergeSort_sort(int A[], int n) {
	for(int step = 2; step / 2 <= n; step *= 2) {
		for(int i = 1; i <= n; i += step) {
			std::sort(A + i, A + std::min(i + step, n + 1));
		}
		//
	}
}


