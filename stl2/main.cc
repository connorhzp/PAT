///
/// @file    main.cc
/// @author  hzp(haozhipeng2018@163.com)
/// @date    2018-07-24 17:25:50
///

#include <iostream>
using std::cout;
using std::endl;


#include <stack>
#include <iostream>

int main()
{
	std::stack<int>   s;

	s.push( 2 );
	s.push( 6 );
	s.push( 51 );

	std::cout << s.size() << " elements on stack\n";
	std::cout << "Top element: "
		<< s.top()         // Leaves element on stack
		<< "\n";
	std::cout << s.size() << " elements on stack\n";
	s.pop(); 

	s.pop(); 
	s.pop(); 
	s.pop(); 

	std::cout << s.size() << " elements on stack\n";
	std::cout << "Top element: " << s.top() << "\n";

	return 0;
}
