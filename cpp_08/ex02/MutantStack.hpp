/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:12:07 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/17 14:08:57 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <deque>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename MutantStack<T>::container_type::iterator iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack();
		MutantStack(MutantStack<T> const& ref);
		MutantStack<T>&	operator=(MutantStack<T> const& ref);
		iterator begin();
		iterator end();
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_iterator cbegin() const;
		const_iterator cend() const;
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;
};
template <typename T>
MutantStack<T>::MutantStack() {;}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& ref)
{
	*this = ref;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const& ref)
{
	std::stack<T>::c = ref.std::stack<T>::c;
	return (*this);
}

template <typename T>
typename MutantStack<T>::container_type::iterator MutantStack<T>::begin() {
		return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::container_type::iterator MutantStack<T>::end() {
		return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::container_type::reverse_iterator MutantStack<T>::rbegin() {
		return (std::stack<T>::c.rbegin());
}

template <typename T>
typename MutantStack<T>::container_type::reverse_iterator MutantStack<T>::rend() {
		return (std::stack<T>::c.rend());
}



template <typename T>
typename MutantStack<T>::container_type::const_iterator MutantStack<T>::cbegin() const {
		return (std::stack<T>::c.cbegin());
}

template <typename T>
typename MutantStack<T>::container_type::const_iterator MutantStack<T>::cend() const {
		return (std::stack<T>::c.cend());
}

template <typename T>
typename MutantStack<T>::container_type::const_reverse_iterator MutantStack<T>::crbegin() const {
		return (std::stack<T>::c.crbegin());
}

template <typename T>
typename MutantStack<T>::container_type::const_reverse_iterator MutantStack<T>::crend() const {
		return (std::stack<T>::c.crend());
}
#endif
