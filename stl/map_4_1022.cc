///
/// @file    map_4_1022.cc
/// @author  hzp(haozhipeng2018@163.com)
/// @date    2018-07-22 21:04:03
///

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
using std::cout;
using std::endl;


map<string, set<int>> mpTitle, mpAuthor, mpKey, mpPub, mpYear;


void query(map<string, set<int>>& mp, string& str) {
	if(mp.find(str) != mp.end()) {
		for(set<int>::iterator it = mp[str].begin(); it != mp[str].end(); it++) {
			printf("%07d\n", *it);
		}
	} else 
		printf("Not Found\n");
}


int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int id;
		scanf("%d", &id);
		char c = getchar();
		string temp;
		getline(cin, temp); 
		mpTitle[temp].insert(id);
		getline(cin, temp);
		mpAuthor[temp].insert(id);
		while(cin >> temp) {
			mpKey[temp].insert(id);
			c = getchar();
			if(c == '\n')
				break;
		}
		getline(cin, temp);
		mpPub[temp].insert(id);
		getline(cin, temp);
		mpYear[temp].insert(id);
	}

	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int type;
		scanf("%d: ", &type);
		string temp;
		getline(cin, temp);
		printf("%d: ", type);
		cout << temp << endl;
		if(type == 1)
			query(mpTitle, temp);
		if(type == 2) 
			query(mpAuthor, temp);
		if(type == 3) 
			query(mpKey, temp);
		if(type == 4) 
			query(mpPub, temp);
		if(type == 5) 
			query(mpYear, temp);
	}


	return 0;
}


