/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:09:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/05 15:17:06 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>

Span::Span(int max): _max(max) {
	_vtr = std::vector<unsigned int>();
}

Span::Span(Span const& ref) {
	if (this == &ref)
		return ;
	*this = ref;
}

Span&	Span::operator=(Span const& ref) {
	_max = ref._max;
	_vtr = ref._vtr;
	_shortest = ref._shortest;
	_smallest = ref._smallest;
	return *this;
}

Span::~Span() {}

const char *	Span::MAXNBRELEMENTS::what() const _GLIBCXX_NOTHROW {
	return ("Error: Span class has already the max number of elements\n");
}

const char *	Span::NOTENOUGHNBRS::what() const _GLIBCXX_NOTHROW {
	return ("Error: There must be at least 2 numbers to get a span\n");
}

void	Span::addNumber(unsigned int const& nbr) {
	std::vector<unsigned int>::iterator	ptr;

	if (_vtr.size() == _max)
		throw MAXNBRELEMENTS();
	if (_vtr.empty())
	{
		_vtr.push_back(nbr);
		_smallest = nbr;
		_biggest = nbr;
		return ;
	}
	_vtr.push_back(nbr);
	if (nbr > _biggest)
		_biggest = nbr;
	if (nbr < _smallest)
		_smallest = nbr;
}

void	Span::addAmount(unsigned int const& amount) {
	std::srand(std::time(NULL));
	
	for (unsigned int i = 0; i < amount; i++)
	{
		addNumber(static_cast<unsigned int>(std::rand()));
	}
}

int Span::shortestSpan() {
	if (_vtr.size() < 2)
		throw NOTENOUGHNBRS();
	std::sort(_vtr.begin(), _vtr.end());
	std::vector<unsigned int>::iterator	ptr;
	ptr = _vtr.begin();
	ptr++;
	_shortest = _vtr[1] - _vtr[0];
	for (; ptr != _vtr.end(); ptr++)
	{
		if (*ptr - *(ptr - 1) < _shortest)
			_shortest = *ptr - *(ptr - 1);
	}
	return (_shortest);
}

int Span::longestSpan() {
	if (_vtr.size() < 2)
		throw NOTENOUGHNBRS();
	return (_biggest - _smallest);
}
