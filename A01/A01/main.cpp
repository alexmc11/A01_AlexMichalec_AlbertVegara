#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>

//TYPEDEF ITERADORES

typedef std::vector<int>::iterator vforit;
typedef std::vector<int>::reverse_iterator vrevit;
typedef std::deque<int>::iterator dforit;
typedef std::deque<int>::reverse_iterator drevit;

//FUNCIONES ITERADORES

void iteratorsVector(std::vector<int> v)
{
	std::cout << "VECTOR" << std::endl;
	std::cout << std::endl;
	

	for (vforit it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	for (vrevit rit = v.rbegin(); rit != v.rend(); rit++)
	{
		std::cout << *rit << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void iteratorsDeque(std::deque<int> d)
{
	std::cout << "DEQUE" << std::endl;
	std::cout << std::endl;


	for (dforit it = d.begin(); it != d.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	for (drevit rit = d.rbegin(); rit != d.rend(); rit++)
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
	iteratorsDeque(d1);
}