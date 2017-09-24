#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>

//FUNCIONES ITERADORES

void iteratorsVector(std::vector<int> v)
{
	std::cout << "VECTOR" << std::endl;
	std::cout << std::endl;
	typedef std::vector<int>::iterator forit;
	typedef std::vector<int>::reverse_iterator revit;

	for (forit it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	for (revit rit = v.rbegin(); rit != v.rend(); rit++)
	{
		std::cout << *rit << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void main()
{
	std::vector<int> v1{ 3, 6, 7, 4, 8 };
	std::deque<int> d1{ 2, 4, 6, 8, 9 };
	std::list<int> l1{ 1, 2, 3, 4, 5 };
	std::forward_list<int> fl1{ 4, 5, 1 ,2 ,3 };
	std::map<char, int> m1;
	std::set<int> s1;

	iteratorsVector(v1);
}