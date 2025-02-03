/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:06 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 23:16:11 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Weapon.hpp>

class HumanA
{
    private:
    std::string name;
    Weapon weapon;
    HumanA(void);

    public:
    HumanA(void);
    HumanA(std::string your_name, std::string your_weapon);
    void attack(void);
    void set_name(std:: string your_name);
    const std::string& get_name(void) const;
    void set_weapon(std::string your_weapon);
    const Weapon& get_weapon(void) const;
};