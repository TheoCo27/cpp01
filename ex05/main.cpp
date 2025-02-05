/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:27:44 by theog             #+#    #+#             */
/*   Updated: 2025/02/05 15:55:08 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl complainer;


    complainer.complain("DEBUG");
    complainer.complain("WARNING");
    complainer.complain("INFO");
    complainer.complain("ERROR");
    complainer.complain("INVALID");

    return (0);
}