/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:00:10 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/13 18:25:00 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::~Weapon()
{
    
}

std::string Weapon::getType() const
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}