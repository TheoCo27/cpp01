/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:22:33 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/05 00:50:54 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replacer.hpp"

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

bool check_args(char *argv)
{
	int i = 0;
	int j = 0;
	while(argv[i])
	{
		//check_empty
		//check_whitespace
		//checkisprint
	}
	
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\n need ./replacer <filename> <s1_to_replace> <s2_replace_with>" << std::endl;
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cout << "Error\nCannot open file " << argv[1] << std::endl;
		return (1); 
	}
	std::string outfile_name = std::string(argv[1]) + ".replace";
	std::ofstream outfile(outfile_name, std::ios::trunc);
	if (!outfile)
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
