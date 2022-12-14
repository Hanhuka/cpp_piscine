/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:42:34 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/12 12:49:19 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {

std::string hi = "HI THIS IS BRAIN";

std::string *stringPTR = &hi;
std::string &stringREF = hi;

std::cout << &hi << std::endl << stringPTR << std::endl << &stringREF << std::endl;
std::cout << hi << std::endl << *stringPTR << std::endl << stringREF << std::endl;
}