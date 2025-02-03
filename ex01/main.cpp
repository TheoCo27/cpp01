/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:56:00 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 19:23:56 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z_tab = zombieHorde(10, "Mordimax");
    if (!z_tab)
    {
        std::cout << "Allocation failed" << std::endl;
        return (1);
    }
    for(int i = 0; i < 10; i++)
        z_tab[i].announce();
    delete [] z_tab;
}