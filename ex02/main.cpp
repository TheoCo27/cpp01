/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:45:41 by theog             #+#    #+#             */
/*   Updated: 2025/02/03 20:54:11 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*Your program has to print:
• The memory address of the string variable. 
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR. 
• The value pointed to by stringREF.*/
int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string& str_ref = str;
    std::string *str_ptr = &str;

    std::cout << "Memory address of the string variable :" << &str << std::endl;
    std::cout << "The memory address held by stringPTR :" << &str_ptr << std::endl;
    std::cout << "The memory address held by stringREF :" << &str_ref << std::endl;
    std::cout << "The value of the string variable :" << str << std::endl;
    std::cout << "The value pointed to by stringPTR :" << str_ptr << std::endl;
    std::cout << "The value pointed to by stringREF :" << str_ref << std::endl;
}