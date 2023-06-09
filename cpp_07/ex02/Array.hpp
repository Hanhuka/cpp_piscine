/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:41:25 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/09 14:21:07 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template< typename T >
class Array {
	public:
		Array(): _size(0), _array(new T[0]) {};
		Array& operator=(Array const& ref) {
			_size = ref._size;
			if (_array)
				delete _array;
			_array = new T[_size];
			for (int i = 0; i < size; i++)
				_array[i] = ref._array[i];
		}
		Array(Array const& ref): _size(ref._size), _array(new T[ref._size]) {
			*this = ref;
		}
		class OOBEXCEPTION : std::exception {
			virtual const char *what() const _GLIBCXX_NOTHROW;
		}
		Array& operator[](int const& i) {

			if (i < 0 || i >= _size)
				throw (Array::OOBEXCEPTION());
			return (_array[i]);
		}
		int	size(void)
		{
			return (_size);
		}
		~Array()
		{
			delete _array;
		}
	private:
		T *_array;
		int _size;
};

#endif