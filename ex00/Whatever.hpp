/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caspar <caspar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:45:08 by caspar            #+#    #+#             */
/*   Updated: 2025/08/05 14:02:42 by caspar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void    swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T   min(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T>
T   max(T a, T b) {
    return (a > b) ? a : b;
}
