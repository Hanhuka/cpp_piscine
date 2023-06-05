/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:46:23 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/01 17:55:20 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "utils.hpp"

int main()
{
	Base *test;
	test = generate();
	identify(test);
	identify(*test);
	delete test;
}