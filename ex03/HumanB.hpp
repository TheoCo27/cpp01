/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:10 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 23:19:27 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

class HumanB
{
    private:
    std::string name;
    Weapon weapon;
    HumanB(void);

    public:
    HumanB(void);
    HumanB(std::string your_name, std::string your_weapon);
    void attack(void);
    void set_name(std:: string your_name);
    const std::string& get_name(void) const;
    void set_weapon(std::string your_weapon);
    const Weapon& get_weapon(void) const;
};