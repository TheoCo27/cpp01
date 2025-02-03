/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:06 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 00:28:55 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A_HPP__
#define __HUMAN_A_HPP__ 

#include "Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon& weapon;

    public:
    HumanA(std::string your_name, Weapon& your_weapon);
    void attack(void);
    void set_name(std:: string your_name);
    const std::string& get_name(void) const;
    void setWeapon(std::string your_weapon);
    const Weapon& get_weapon(void) const;
};

#endif