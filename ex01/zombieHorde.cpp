/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:08:00 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 19:22:58 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie *z_tab = new(std::nothrow) Zombie[N];

    if (!z_tab)
        return (NULL);
    for (int i = 0; i < N; i++)
        z_tab[i].set_name(name);
    return (z_tab);
}