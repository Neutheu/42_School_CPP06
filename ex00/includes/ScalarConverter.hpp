/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:13:45 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/16 13:45:43 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_H
# define SCALARCONVERT_H

# include <iostream>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <limits>
# include <stdexcept>

class ScalarConverter
{
	public:
	static void 	convert(const std::string literal);
	static void 	charConvert(const std::string literal);
	static void 	intConvert(const std::string literal);
	static void 	floatConvert(const std::string literal);
	static void 	doubleConvert(const std::string literal);
	virtual void	abstract() = 0;
};

#endif