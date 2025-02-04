/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:08 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 17:14:57 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string your_name)
    : name(your_name), weapon(NULL)
{
    return;
}
void HumanB::attack(void)
{
	if (weapon == NULL)
	{
	    std::cout << name << " attacks with no weapon " << std::endl;

		return;
	}
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
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
    weapon = &your_weapon;
}
const Weapon& HumanB::get_weapon(void) const
{
    return (*weapon);
}