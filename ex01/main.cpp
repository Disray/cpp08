/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:52:41 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/20 21:21:57 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

// int main( void )
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
	
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

int	main( void )
{
	const size_t	N = 10;
	Span			span(N);

	std::srand(std::time(0));
	for (size_t i = 0; i < N; i++)
	{
		int number = std::rand() % 100;
		std::cout << number << " ";
		span.addNumber(number);
	}
	std::cout << std::endl;

	try
	{
		int longest = span.longestSpan();
		int shortest = span.shortestSpan();
		std::cout << "Longest span: " << longest << std::endl;
		std::cout << "Shortest span: " << shortest << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}