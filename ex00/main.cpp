/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:57:56 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/12 15:43:34 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;

	zombie.announce();
	Zombie* newzombie = newZombie("TOTO");
	newzombie->announce();
	delete (newzombie);
	randomChump("LULU");
	
	return(0);
}
