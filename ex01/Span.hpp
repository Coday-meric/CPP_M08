//
// Created by aymeric on 21/09/23.
//

#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <iostream>
#include <list>

class Span {
private:
	unsigned int _N;
	std::list<int> _list;
public:
	Span(unsigned int N);
	~Span();
	Span(Span const & src);
	Span & operator=(Span const & rhs);
	void addNumber(int nbr);
	int shortestSpan();
	int longestSpan();
	class OverflowList : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Taille maximum de la liste atteinte !";
		}
	};
	class ListFalse : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "La liste n'est pas valide !";
		}
	};
};


#endif //SPAN_HPP
