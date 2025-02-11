/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:22:33 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/11 20:29:03 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "utils.hpp"
#include <fstream>

std::string replace_occurence(std::string& line, std::string s1, std::string s2)
{
	size_t i_occ;

	if (s1.compare(s2) == 0)
		return (line);
	while(line.find(s1) != std::string::npos)
	{
		i_occ = line.find(s1);
		line.erase(i_occ, s1.length());
		line.insert(i_occ, s2);
	}
	return (line);
}

bool check_args(char **argv)
{
	int i = 1;
	std::string str;
	
	while(argv[i])
	{
		str = argv[i];
		if (str.empty() == true)
		{
			std::cout << "Error\nArgs cannot be empty" << std::endl;
			return (1);
		}
		if (i == 1 && no_white_space(str) == 0)
		{
			std::cout << "Error\nNo whitespace allowed for filename" << std::endl;
			return (1);
		}
		if (only_print(str) == 0)
		{
			std::cout << "Error\nOnly printable chars accepted" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\nNeed ./replacer <filename> <s1_to_replace> <s2_replace_with>" << std::endl;
		return (1);
	}
	if (check_args(argv) == 1)
		return (1);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error\nCannot open file " << argv[1] << std::endl;
		return (1); 
	}
	std::string outfile_name = std::string(argv[1]) + ".replace";
	std::ofstream outfile(outfile_name.c_str(), std::ios::trunc);
	if (outfile.fail())
	{
		std::cout << "Error\nCannot open file " << outfile_name << std::endl;
		return (1); 
	}
	std::string line;
	while(std::getline(infile, line))
	{
		replace_occurence(line, s1, s2);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
