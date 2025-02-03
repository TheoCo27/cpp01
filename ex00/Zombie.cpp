/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:41:02 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 18:09:11 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    name = "Mordicus";
}
Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << name << " has been destroyed" << std::endl;
    name.clear();
}
std::string Zombie::get_name(void)
{
    return (name);
}
void Zombie::set_name(std::string new_name)
{
    name = new_name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}