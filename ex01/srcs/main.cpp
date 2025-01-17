/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:06:41 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 12:19:35 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data    data;
    Data    *data_ptr;
    Data    *ptr_to_test;

    data_ptr = &data;
    ptr_to_test = Serializer::deserialize(Serializer::serialize(&data));
    std::cout << "data ptr: " << data_ptr << std::endl;
    std::cout << "ptr to test: " << ptr_to_test << std::endl;
    return (0);
}