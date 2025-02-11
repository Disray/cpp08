/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrichard <rrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:31:04 by rrichard          #+#    #+#             */
/*   Updated: 2025/02/11 12:42:38 by rrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind( T &container, int value )
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return (it);
}

#endif