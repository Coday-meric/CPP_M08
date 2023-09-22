//
// Created by aymeric on 21/09/23.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <iostream>

template <typename T>
void easyfind(T & a, int b){
	if (std::find(a.begin(), a.end(), b) != a.end())
		std::cout << "Found" << std::endl;
	else
		std::cerr << "Not found" << std::endl;
}

#endif //EASYFIND_HPP
