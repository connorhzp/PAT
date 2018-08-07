 ///
 /// @file    heapSort.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-30 19:29:46
 ///
 
#include <iostream>
using std::cout;
using std::endl;

const int maxn = 100;
int heap[maxn], n = 10;

void downAdjust(int low, int high) {
	int i = low, j = i * 2;
	while(j <= high) {
		if(j + 1 <= high && heap[j + 1] > heap[j]) {
		j = j + 1;
		}
		if(heap[j] > heap[i]) {
			std::swap(heap[j], heap[i]);
			i = j;
			j = i * 2;
		} else {
			break;
		}
	}
}

void createHeap() {
	for(int i = n / 2; i >= 1; i--) {
		downAdjust(i, n);
	}
}


void deleteTop() {
	heap[1] = heap[n--];
	downAdjust(1, n);
}

void upAdjust(int low, int high) {
	int i = high, j = i / 2;
	while(j >= low) {
		if(heap[j] < heap[i]) {
			std::swap(heap[j], heap[i]);
			i = j;
			j = i / 2;
		} else {
			break;
		}
	}
}

void insert(int x) {
	heap[++n] = x;
	upAdjust(1, n);
}



void heapSort() {
	createHeap();
	for(int i = n; i > 1; i--) {
		std::swap(heap[i], heap[1]);
		downAdjust(1, i - 1);
	}
}



