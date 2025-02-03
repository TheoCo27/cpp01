/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:03 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 00:28:55 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string your_name, Weapon& your_weapon)
    : name(your_name), weapon(your_weapon) {}  // ✅ Initialisation correcte

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
void HumanA::set_name(std:: string your_name)
{
    name = your_name;
}
const std::string& HumanA::get_name(void) const
{
    return (name);
}
void HumanA::setWeapon(std::string your_weapon)
{
    weapon.setType(your_weapon);
}
const Weapon& HumanA::get_weapon(void) const
{
    return (weapon);
}