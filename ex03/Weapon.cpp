/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:16 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 00:25:09 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    type = "";
}

Weapon::Weapon(std::string u_type)
{
    type = u_type;
}

const std::string& Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(const std::string& str)
{
    type = str;
}