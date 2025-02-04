/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:22:33 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/04 17:29:26 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replacer.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\n need ./replacer <filename> <s1_to_replace> <s2_replace_with>" << std::endl;
	}
}