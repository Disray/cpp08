/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:11:20 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/18 13:03:40 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0) {}

Span::Span( unsigned int& n ) : maxSize(n)
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

void	Span::addNumber( int number )
{
	if (maxSize >= this->numbers.size())
		throw std::overflow_error("Cannot add more numbers: limit reached.");
	numbers.push_back(number);
}

