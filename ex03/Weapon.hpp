/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:13:20 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 00:16:01 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(void);
        Weapon(std::string u_type);
        const std::string& getType(void) const;
        void setType(const std::string& str);

};

#endif