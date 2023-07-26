/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:31:42 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/26 17:28:13 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>
#include <algorithm>
#include <limits>
#include <ctime>

void	vectorSortAndMerge(std::vector<int> &vtr, int start, int end);
void	dequeSortAndMerge(std::deque<int> &dqe, int start, int end);

#endif