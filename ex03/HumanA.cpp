/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:54:57 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/14 18:20:10 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
    
}

HumanA::HumanA(std::string name, Weapon& _type)
{
    _name = name;
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack()
{
    Weapon  type;
    
    _type = type
    std::cout << _name << " attacks with their " << _type;
}