 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-26 15:16:14
 ///
 
#include <iostream>
#include <vector>
using namespace std;
using std::cout;
using std::endl;

int main() {


	vector<int> arr;
	arr.resize(10);

	printf("%ld %ld\n", arr.size(), arr.capacity());;


	
	arr[9] = 9;

	printf("%ld %d\n", arr.size(), arr[9]);

	return 0;
}
