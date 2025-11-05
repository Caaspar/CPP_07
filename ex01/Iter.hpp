/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:05:44 by caspar            #+#    #+#             */
/*   Updated: 2025/08/22 17:31:35 by cgerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdio.h>

template <typename T, typename Func>
void    iter(T *array, size_t length, Func function)
{
    if (array == NULL)
        return ;
    for (size_t i = 0; i < length; i++)
        function(array[i]);
}