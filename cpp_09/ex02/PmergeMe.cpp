/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:32:21 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/31 15:14:27 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	vectorInsertionSort(std::vector<int> &vtr, int start, int end) {
	for (int i = start; i < end; i++)
	{
		int tmp = vtr[i + 1];
		int i2 = i + 1;
		while (i2 > start && vtr[i2 - 1] > tmp)
		{
			vtr[i2] = vtr[i2 - 1];
			i2--;
		}
		vtr[i2] = tmp;
	}
}

void	vectorSortAndMerge(std::vector<int> &vtr, int start, int end) {
	std::vector<int> left;
	std::vector<int> right;
	std::vector<int>::iterator itr;
	int middle = (end + start) / 2;
	int i;
	if (end - start > K)
	{
		vectorSortAndMerge(vtr, start, middle);
		vectorSortAndMerge(vtr, middle + 1, end);
		for (i = start; i <= middle; i++)
			left.push_back(vtr[i]);
		for (i = middle + 1; i <= end; i++)
			right.push_back(vtr[i]);
		itr = vtr.begin();
		for (int i = 0; i < start; i++)
			itr++;
		std::merge(left.begin(), left.end(), right.begin(), right.end(), itr);
	}
	else
		vectorInsertionSort(vtr, start, end);
}

void	dequeInsertionSort(std::deque<int> &dqe, int start, int end) {
	for (int i = start; i < end; i++)
	{
		int tmp = dqe[i + 1];
		int i2 = i + 1;
		while (i2 > start && dqe[i2 - 1] > tmp)
		{
			dqe[i2] = dqe[i2 - 1];
			i2--;
		}
		dqe[i2] = tmp;
	}
}

void	dequeSortAndMerge(std::deque<int> &dqe, int start, int end) {
	std::deque<int> left;
	std::deque<int> right;
	std::deque<int>::iterator itr;
	int middle = (end + start) / 2;
	int i;
	if (end - start > K)
	{
		dequeSortAndMerge(dqe, start, middle);
		dequeSortAndMerge(dqe, middle + 1, end);
		for (i = start; i <= middle; i++)
			left.push_back(dqe[i]);
		for (i = middle + 1; i <= end; i++)
			right.push_back(dqe[i]);
		itr = dqe.begin();
		for (int i = 0; i < start; i++)
			itr++;
		std::merge(left.begin(), left.end(), right.begin(), right.end(), itr);
	}
	else
		dequeInsertionSort(dqe, start, end);
}

