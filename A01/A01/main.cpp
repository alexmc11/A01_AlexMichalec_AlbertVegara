#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>

void main()
{
	std::vector<int> v1{ 3, 6, 7, 4, 8 };
	std::deque<int> d1{ 2, 4, 6, 8, 9 };
	std::list<int> l1{ 1, 2, 3, 4, 5 };
	std::forward_list<int> fl1{ 4, 5, 1 ,2 ,3 };
	std::map<char, int> m1;
	std::set<int> s1;
}