/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:27:42 by theog             #+#    #+#             */
/*   Updated: 2025/02/05 15:51:56 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__
#include <iostream>

class Harl
{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public:
    void    complain( std::string level );
};
#endif