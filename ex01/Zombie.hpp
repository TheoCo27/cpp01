/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:37:18 by theog             #+#    #+#             */
/*   Updated: 2025/02/04 17:05:29 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>

class Zombie
{
    private: 
        std::string name;
    public:
    void announce(void);
    Zombie(void);
    Zombie(std::string new_name);
    ~Zombie(void);
    std::string get_name(void);
    void set_name(std::string new_name);
};

void randomChump(std::string name);
Zombie* newZombie( std::string name);
Zombie*    zombieHorde( int N, std::string name );
#endif