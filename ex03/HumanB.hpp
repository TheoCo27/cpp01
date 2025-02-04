/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:10 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 17:13:03 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B_HPP__
#define __HUMAN_B_HPP__

#include "Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon *weapon;

    public:
    HumanB(void);
    HumanB(std::string your_name);
    void attack(void);
    void set_name(std:: string your_name);
    const std::string& get_name(void) const;
    void setWeapon(Weapon& your_weapon);
    const Weapon& get_weapon(void) const;
};

#endif