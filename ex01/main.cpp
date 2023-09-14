/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:14:31 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/14 16:43:09 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    int j;
    std::string nameHorde;
    
    j = 2000;
    if (ac == 2)
    {
        nameHorde = av[1];
        std::cout << "Vous etes en train de faire ATTAQUER une horde de zombies !!!" << std::endl;
        Zombie* newzombie = zombieHorde(j, nameHorde);
        delete[] (newzombie);
    }
    else
        std::cout << "Choisissez un nom de teamhorde!!!" << std::endl;
    return (0);
}