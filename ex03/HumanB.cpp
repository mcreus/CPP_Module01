/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:54:26 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/15 11:17:21 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack()
{
    if (_weapon->getType().empty() == true)
        std::cout << this->_name << " don't attack because he has no weapon !!!" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << _weapon->getType();
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}