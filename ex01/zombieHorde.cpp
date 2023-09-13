/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:07:30 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/13 16:21:04 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombieB = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
	{
		zombieB[i].setName(name);
		zombieB[i].announce();
		i++;
	}
	return (zombieB);
}