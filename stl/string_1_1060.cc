 ///
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 //
 /// @file    23_1060.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-20 10:30:17
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int n; //significant digits

std::string deal(std::string s, int& e) {
	int k = 0;
	while(s.length() > 0 && s[0] == '0') {
		s.erase(s.begin());
	}
	if(s[0] == '.') {
		s.erase(s.begin());
		while(s.length() > 0 && s[0] == '0') {
			s.erase(s.begin());
			e--;
		}
	} else {


	}
}


int main() {


	return 0;
}



