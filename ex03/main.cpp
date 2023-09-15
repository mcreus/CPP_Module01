/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:35:43 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/15 11:32:54 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        std::cout << std::endl;
        club.setType("some other type of club");
        std::cout << std::endl;
        bob.attack();
        std::cout << std::endl;
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        std::cout << std::endl;
        jim.attack();
        std::cout << std::endl;
        club.setType("some other type of club");
        std::cout << std::endl;
        jim.attack();
        std::cout << std::endl;
    }
    
    return 0;
}