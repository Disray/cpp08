/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:09:16 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/18 14:01:08 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>
# include <limits>
# include <iostream>

class Span
{
	private:
		unsigned int	maxSize;
		std::vector<int>	numbers;
	public:
		Span();
		Span( unsigned int n );
		Span( const Span& );
		Span& operator=( const Span& );
		~Span();

		unsigned int	getMaxSize() const;
		void	addNumber( int number );
		int		shortestSpan() const;
		int		longestSpan() const;
};

#endif