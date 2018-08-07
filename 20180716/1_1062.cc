 ///
 /// @file    1062.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 21:03:31
 ///
 
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;



struct Person{
	int ID; 
	int virtue_grade;
	int talent_grade;
	int type;
};
	
int cmp(Person a, Person b) {
	if(a.type != b.type)
		return a.type < b.type;
	else if (a.virtue_grade + a.talent_grade !=  b.virtue_grade + b.talent_grade)
		return a.virtue_grade + a.talent_grade > b.virtue_grade + b.talent_grade;
	else if (a.virtue_grade != b.virtue_grade) 
		return a.virtue_grade > b.virtue_grade;
	else 
		return a.ID < b.ID;
}

int main() {
	Person people[100000];

	int n, l, h;
	scanf("%d%d%d", &n, &l, &h);

	for(int i = 0; i < n; ++i) {
//		int ID, virtue_grade, talent_grade;
		scanf("%d%d%d", &people[i].ID, &people[i].virtue_grade, &people[i].talent_grade);
		if(people[i].virtue_grade < l || people[i].talent_grade < l) {
			--i, --n;
			continue;
		}
		else if(people[i].virtue_grade >= h && people[i].talent_grade >= h)
			people[i].type = 0;
		else if(people[i].virtue_grade >= h && people[i].talent_grade < h)
			people[i].type = 1;
		else if(people[i].virtue_grade >= people[i].talent_grade)
			people[i].type = 2;
		else
			people[i].type = 3;
	}

	std::sort(people, people + n, cmp);

	printf("%d\n", n);
	for(int i = 0; i < n; ++i) {
		printf("%08d %d %d\n", people[i].ID, people[i].virtue_grade, people[i].talent_grade);
	}


	return 0;
}
