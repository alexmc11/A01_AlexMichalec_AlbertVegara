#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>

//TYPEDEF ITERADORES///////////////////////////////////////

typedef std::vector<int>::iterator vforit;
typedef std::vector<int>::reverse_iterator vrevit;
typedef std::deque<int>::iterator dforit;
typedef std::deque<int>::reverse_iterator drevit;
typedef std::list<int>::iterator lforit;
typedef std::list<int>::reverse_iterator lrevit;
typedef std::forward_list<int>::iterator flforit;
typedef std::map<char, int>::iterator mforit;
typedef std::map<char, int>::reverse_iterator mrevit;
typedef std::set<int>::iterator sforit;
typedef std::set<int>::reverse_iterator srevit;


//FUNCIONES ITERADORES////////////////////////////////////

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

void iteratorsList(std::list<int> l)
{
	std::cout << "LIST" << std::endl;
	std::cout << std::endl;


	for (lforit it = l.begin(); it != l.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	for (lrevit rit = l.rbegin(); rit != l.rend(); rit++)
	{
		std::cout << *rit << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void iteratorsForwardList(std::forward_list<int> fl)
{
	std::cout << "FORWARD LIST" << std::endl;
	std::cout << std::endl;


	for (flforit it = fl.begin(); it != fl.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void iteratorsMap(std::map<char, int> m)
{
	std::cout << "MAP" << std::endl;
	std::cout << std::endl;


	for (mforit it = m.begin(); it != m.end(); it++)
	{
		std::cout << it->first << " => " << it->second << " " << std::endl;
	}

	std::cout << std::endl;

	for (mrevit rit = m.rbegin(); rit != m.rend(); rit++)
	{
		std::cout << rit->first << " => " << rit->second << " " << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void iteratorsSet(std::set<int> s)
{
	std::cout << "SET" << std::endl;
	std::cout << std::endl;


	for (sforit it = s.begin(); it != s.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	for (srevit rit = s.rbegin(); rit != s.rend(); rit++)
	{
		std::cout << *rit << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void main()
{

	//CONSTRUCTORES///////////////////////////////////////////

	std::vector<int> v1{ 3, 6, 7, 4, 8 };
	std::vector<int> v2(v1);

	std::deque<int> d1{ 2, 4, 6, 8, 9 };
	std::deque<int> d2(d1);

	std::list<int> l1{ 1, 2, 3, 4, 5 };
	std::list<int> l2(l1);

	std::forward_list<int> fl1{ 4, 5, 1 ,2 ,3 };
	std::forward_list<int> fl2(fl1);

	std::map<char, int> m1;
	{
		m1['a'] = 9;
		m1['b'] = 8;
		m1['c'] = 7;
		m1['d'] = 6;
	}
	std::map<char, int> m2(m1);

	std::set<int> s1{ 1, 4, 9, 7 };
	std::set<int> s2(s1);

	//LLAMADAS FUNCIONES ITERADORES/////////////////////////

	iteratorsVector(v1);
	iteratorsDeque(d1);
	iteratorsList(l1);
	iteratorsForwardList(fl1);
	iteratorsMap(m1);
	iteratorsSet(s1);
}