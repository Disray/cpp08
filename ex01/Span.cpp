/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:11:20 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/20 18:51:20 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0) {}

Span::Span( unsigned int n ) : maxSize(n)
{
	numbers.reserve(n);
}

Span::Span( const Span& other ) : maxSize(other.maxSize)
{
	numbers.reserve(other.maxSize);
}

Span&	Span::operator=( const Span& other )
{
	if (this != &other)
	{
		this->maxSize = other.maxSize;
		this->numbers.reserve(other.maxSize);
		this->numbers = other.numbers;
	}
	return (*this);
}

Span::~Span() {}

unsigned int	Span::getMaxSize() const
{
	return (this->maxSize);
}

void	Span::addNumber( int number )
{
	if (this->numbers.size() >= this->getMaxSize())
		throw std::overflow_error("Cannot add more numbers: limit reached.");
	numbers.push_back(number);
}

int		Span::shortestSpan() const
{
	if (this->numbers.size() <= 1)
		throw std::invalid_argument("Cannot find shortest span: not enough numbers.");
	std::vector<int> sortedNumbers = numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	
	int	shortest = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
		int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

int		Span::longestSpan() const
{
	if (this->numbers.size() <= 1)
		throw std::invalid_argument("Cannot find longest span: not enough numbers.");

	int	longest = std::numeric_limits<int>::min();
	for (size_t i = 0; i < numbers.size(); ++i)
	{
		for (size_t j = i + 1; j < numbers.size(); j++)
		{
			int span = std::abs(numbers[j] - numbers[i]);
			if (span > longest)
				longest = span;
		}
	}
	return (longest);
}