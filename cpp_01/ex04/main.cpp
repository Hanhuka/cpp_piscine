/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:26:11 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 14:16:47 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstring>

std::string my_replace(std::string line, std::string replace, std::string n_str) {
	int i = 0, i2 = 0;
	std::string copy;
	int	pos = -1, min = 0;

	copy.resize(line.length());
	while (line[i])
	{
		if (pos == -1 && line.find(replace, min) != std::string::npos)
			pos = line.find(replace, min);
		if (i == pos && line[i])
		{
			copy.resize(copy.length() - replace.length() + n_str.length());
			for (unsigned long i3 = 0; i3 < n_str.length(); i3++, i2++)
				copy[i2] = n_str[i3];
			i += replace.length();
			pos = -1;
			min = i;
		}
		else
			copy[i2] = line[i], i2++, i++;
	}
	copy[i2] = 0;	
	return (copy);
}

int main(int ac, char **av) {

	if (ac != 4)
		{std::cout << "Error: wrong number of arguments: " << ac - 1 << "\nExpected 3: \"<filename> <string1> <string2>\"" << std::endl; return 1;}
	std::string out;
	out = av[1];
	out.append(".replace");
	std::string line;
	std::ifstream in_file; 
	std::ofstream out_file;
	in_file.open(av[1], std::ios::in );
	out_file.open(out.c_str(), std::ios::trunc);
	if (in_file.fail() || out_file.fail())
		{
			std::cout << "Error: couldn't open file" << std::endl;
			if (!in_file.fail())
				in_file.close();
			if (!out_file.fail())
				out_file.close();
		}
	if (av[2] && !av[2][0])
	{
		if (in_file && out_file)
			while (getline(in_file, line))
				out_file << line << std::endl;
		else
			std::cout << "Cannot read File" << std::endl;
	}
	else
	{
		if (in_file && out_file)
			while (getline(in_file, line))
				out_file << my_replace(line, av[2], av[3]) << std::endl;
		else
			std::cout << "Cannot read File" << std::endl;
	}
	in_file.close();
	out_file.close();
	return 0;
}