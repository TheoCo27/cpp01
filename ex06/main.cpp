/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:27:44 by theog             #+#    #+#             */
/*   Updated: 2025/02/05 16:23:56 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool check_arg(char **argv)
{
    std::string str;

    str = argv[1];
    if (str == "DEBUG" || str == "ERROR" || str == "WARNING" || str == "INFO")
        return (0);
    return (1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error\nNeeds ./harlFilter 'your level'" << std::endl;
        return (1);
    }
    if (check_arg(argv) == 1)
    {
        std::cout << "your input is not matching the following levels:"
                    << "\nDEBUG\nINFO\nWARNING\nERROR" << std::endl; 
    }
    std::string level = argv[1];
    Harl complainer;
    switch(level[0])
    {
        case 'D':
            complainer.complain("DEBUG");
            complainer.complain("INFO");
            complainer.complain("WARNING");
            complainer.complain("ERROR");
            break;
        case 'I':
            complainer.complain("INFO");
            complainer.complain("WARNING");
            complainer.complain("ERROR");
            break;
        case 'W':
            complainer.complain("WARNING");
            complainer.complain("ERROR");
            break;
        case 'E':
            complainer.complain("ERROR");
            break;
    }

    return (0);
}
