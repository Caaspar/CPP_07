/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caspar <caspar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:00:02 by caspar            #+#    #+#             */
/*   Updated: 2025/08/06 13:11:27 by caspar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        T*              _array;
        unsigned int    _size;
    public:
        Array(){
            _array = NULL;
            _size = 0;
        };

        Array(unsigned int n){
            _array = new T[n];
            _size = n;
        };

		Array(const Array& copy){
			_size = copy._size;
			_array = new T[copy._size];
			for (unsigned int i = 0; i < _size; ++i)
				_array[i] = copy._array[i];
		};

		Array&	operator=(const Array& op){
			if (this != &op)
			{
				delete[] _array;
				this->_size = op._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i)
					_array[i] = op._array[i];
			}
			return (*this);
		};

		~Array(){
            if (_array)
            	delete[] _array;
        };

		T& operator[](unsigned int i){
			if (i < _size)
				return (_array[i]);
			else
				throw std::exception();
		};

		unsigned int	size() const{
				return _size;
		};
};
