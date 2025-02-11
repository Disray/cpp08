/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:34:11 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/11 13:46:16 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main( void )
{
	std::vector<int> numbers;

	for (int i = 0; i < 10; i++)
		numbers.push_back(i);
	
	try
	{
		std::vector<int>::iterator it = easyfind(numbers, 1);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	return (0);
}