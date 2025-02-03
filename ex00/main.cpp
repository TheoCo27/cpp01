/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:56:00 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 19:22:02 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie mordicus;
    Zombie mordipuce("Mordipuce");

    mordicus.announce();
    mordipuce.announce();
    randomChump("Random_Zi");

    Zombie *z_ptr = newZombie("New_Zi");
    if (!z_ptr)
    {
        std::cout << "Allocation failed" << std::endl;
        return (1);
    }
    z_ptr->announce();
    delete z_ptr;
    return (0);
}