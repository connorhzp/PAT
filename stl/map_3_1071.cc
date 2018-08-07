 ///
 /// @file    map_3_1071.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-21 23:04:48
 ///
 
#include <iostream>
#include <string>
#include <map>
using namespace std;
using std::cout;
using std::endl;

int check(char c) {
	if(c >= '0' && c <= '9') 
		return true;
	if(c >= 'A' && c <= 'Z')
		return true;
	if(c >= 'a' && c <= 'z')
		return true;

	return false;
}


int main() {
	map<string, int> count;
	string str;
	getline(cin, str);

	size_t i = 0;
	while(i < str.length()) {
		string word;
		while(i < str.length() && check(str[i]) == true) {
			if(str[i] >= 'A' && str[i] <= 'Z') {
				str[i] += 32;
			}
				word += str[i];
				i++;
		}

		while(i < str.length() && check(str[i]) == false) {
			i++;
		}

		if(word != "") {
			if(count.find(word) != count.end()) {
				count[word]++;
			} else {
				count[word] = 1;
			}
		}
	}

	string res;
	int max = 0;
	for(map<string, int>::iterator it = count.begin(); it != count.end(); it++) {
		if(it->second > max) {
			res = it->first;
			max = it->second;
		}
	}

	cout << res << " " << max << endl;

	return 0;
}
