/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:22:33 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/04 21:05:46 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\n need ./replacer <filename> <s1_to_replace> <s2_replace_with>" << std::endl;
		return (1);
	}

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
		if (line.compare(argv[2]) == 0)
		{
			outfile << argv[3] << std::endl;
			continue;
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}