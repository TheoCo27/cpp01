/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:08 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 00:45:32 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string your_name)
    : weapon(*(new Weapon()))
{
    name = your_name;
}
void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
void HumanB::set_name(std:: string your_name)
{
    name = your_name;
}
const std::string& HumanB::get_name(void) const
{
    return (name);
}
void HumanB::setWeapon(Weapon& your_weapon)
{
    weapon = your_weapon;
}
const Weapon& HumanB::get_weapon(void) const
{
    return (weapon);
}