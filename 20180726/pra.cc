 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-19 11:47:05
 ///
 
#include <iostream>
using std::cout;
using std::endl;




int main() {
	int i = 9;
	const int t = i;

	int arr[t] = {9, 9};


	printf("%d%d\n", arr[0], arr[1]);



	return 0;
}
