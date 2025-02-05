/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:27:40 by theog             #+#    #+#             */
/*   Updated: 2025/02/05 15:56:16 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "DEBUG tips, gdb is your spiritual guide" << std::endl;
}
void Harl::info(void)
{
    std::cout << "I dont shares INFOs, I'm no snitch" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "WARNING, imminent blackhold, lol" << std::endl;
}
void Harl::error(void)
{
    std::cout << "ERROR you're programm is boring" << std::endl;
}
void Harl::complain( std::string level )
{

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*tab_func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*tab_func[i])();
            return;
        }
    }
    std::cout << "You better stop using INVALID inputs broh" << std::endl;
}
