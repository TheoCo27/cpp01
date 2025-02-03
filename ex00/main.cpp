/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:56:00 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 18:16:55 by theog            ###   ########.fr       */
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
    z_ptr->announce();
    delete z_ptr;
}