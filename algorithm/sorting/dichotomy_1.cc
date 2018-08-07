 ///
 /// @file    dichotomy_1.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-30 12:03:21
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int binarySearch(int A[], int left, int right, int x) {
	int mid;
	while(left <= right) {
		mid = (left + right) / 2;
		if(A[mid] == x)
			return mid;
		else if(A[mid] > x) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}

	return -1;
}

int lower_bound(int A[], int left, int right, int x) {
	int mid;
	while(left < right) {
		mid = (left + right) / 2;
		if(A[mid] >= x) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	return left;
}

int upper_bound(int A[], int left, int right, int x) {
	int mid;
	while(left < right) {
		mid = (left + right) / 2;
		if(A[mid] > x) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	return left;
}

int solve(int left, int right) {
	int mid;
	while(left < right) {
		mid = (left + right) / 2;
		if(1) {
			right = mid;
		} else {
			left = mid + 1;
		}

	}
	return left;
}

int solve2(int left, int right) {
	int mid;
	while(left + 1 < right) {
		mid = (left + right) / 2;
		if(1) {
			right = mid;
		} else {
			left = mid;
		}
	}

	return right;
}
