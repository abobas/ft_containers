/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/13 17:21:47 by abobas        #+#    #+#                 */
/*   Updated: 2020/08/03 21:59:57 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Vector.hpp"
#include "../includes/List.hpp"

#include <vector>
#include <list>

#include <cstdint>
#include <iostream>
#include <string>
#include <iterator>

int main()
{
	std::cout << std::endl;
	{
		ft::list<int> MyList(10, 10);
		for (ft::list<int>::iterator it = MyList.begin(); it != MyList.end(); it++)
			std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	{
		ft::list<int> MyList(10, 10);
		ft::list<int> MyList2(MyList.begin(), MyList.end());
		for (ft::list<int>::iterator it = MyList2.begin(); it != MyList2.end(); it++)
			std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	{
		ft::list<int> MyList;
		MyList.push_back(88);
		MyList.push_front(44);
		for (ft::list<int>::iterator it = MyList.begin(); it != MyList.end(); it++)
			std::cout << *it << std::endl;
		std::cout << std::endl;
		MyList.push_back(1000);
		MyList.pop_front();
		for (ft::list<int>::iterator it = MyList.begin(); it != MyList.end(); it++)
			std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	{
		ft::list<int> MyList(10, 10);
		MyList.resize(15);
		for (ft::list<int>::iterator it = MyList.begin(); it != MyList.end(); it++)
			std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	{
		ft::list<int> MyList(10, 10);
		MyList.resize(5);
		for (ft::list<int>::iterator it = MyList.begin(); it != MyList.end(); it++)
			std::cout << *it << std::endl;
	}
	std::cout << std::endl;
}
