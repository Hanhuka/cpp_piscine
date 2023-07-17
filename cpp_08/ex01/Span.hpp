/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:09:21 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/05 15:12:03 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <exception>

class Span {
	private:
		Span();
		std::vector<unsigned int>	_vtr;
		unsigned long		_max;
		unsigned int		_biggest;
		unsigned int		_smallest;
		unsigned int		_shortest;
	public:
		Span(int max);
		Span(Span const& ref);
		Span&	operator=(Span const& Span);
		~Span();
		void	addNumber(unsigned int const& nbr);
		void	addAmount(unsigned int const& amount);
		int		shortestSpan();
		int		longestSpan();
		class MAXNBRELEMENTS: public std::exception {
			virtual const char	*what(void) const _GLIBCXX_NOTHROW;
		};
		class NOTENOUGHNBRS: public std::exception {
			virtual const char	*what(void) const _GLIBCXX_NOTHROW;
		};
};