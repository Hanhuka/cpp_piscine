/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:41:25 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/09 18:11:11 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template< typename T >
class Array {
	public:
		Array(): _size(0), _array(new T[0]) {};
		Array<unsigned int>(unsigned int const& size): _array(new T[size]), _size(size) {}
		Array& operator=(Array const& ref) {
			if (_array)
				delete [] _array;
			_size = ref._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = ref._array[i];
			return (*this);
		}
		Array(Array const& ref): _array(new T[ref._size]), _size(ref._size) {
			*this = ref;
		}
		class OOBEXCEPTION: public std::exception {
			virtual const char *what() const _GLIBCXX_NOTHROW {
				return ("Error: Out of bounds");
			}
		};
		T& operator[](unsigned int const& i) {
			if (i >= _size)
				throw (Array::OOBEXCEPTION());
			return (_array[i]);
		}
		int	size(void)
		{
			return (_size);
		}
		~Array()
		{
			delete [] _array;
		}
	private:
		T				*_array;
		unsigned int	_size;
};

#endif