/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:09:16 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/18 13:05:30 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>

class Span
{
	private:
		unsigned int		maxSize;
		std::vector<int>	numbers;
	public:
		Span();
		Span( unsigned int& n );
		Span( const Span &other );
		Span& operator=( const Span &other );
		~Span();

		void	addNumber( int number );
		
};

#endif