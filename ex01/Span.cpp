//
// Created by aymeric on 21/09/23.
//

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {
	//this->_list.resize(N);
}

Span::~Span() {

}

Span::Span(const Span &src) {
	this->_list = src._list;
	this->_N = src._N;
}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs)
	{
		this->_list = rhs._list;
		this->_N = rhs._N;
	}
	return *this;
}

void Span::addNumber(int nbr) {
	if (this->_list.size() >= this->_N)
		throw OverflowList();
	this->_list.push_back(nbr);
}

int Span::longestSpan() {
	if (this->_list.size() == 0 or this->_list.size() == 1)
		throw ListFalse();
	this->_list.sort();
	return (this->_list.back() - this->_list.front());
}

int Span::shortestSpan() {
	if (this->_list.size() == 0 or this->_list.size() == 1)
		throw ListFalse();
	this->_list.sort();
	int range = longestSpan();
	int tmp;
	std::list<int>::iterator it;
	for (it = this->_list.begin(); it != this->_list.end(); ++it){
		tmp = *it;
		if (*it == this->_list.back())
			break;
		it++;
		if (*it - tmp < range)
			range = *it - tmp;
		it--;
	}
	return (range);
}