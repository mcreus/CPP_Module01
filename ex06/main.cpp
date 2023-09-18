/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:51:27 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/18 17:40:50 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum LEVEL
{
    DEBUG ,
    INFO ,
    WARNING ,
    ERROR ,
    NOLEVEL
};

int compareLevel(std::string str)
{
    if (str.compare("DEBUG") == 0)
        return (DEBUG);
    else if (str.compare("INFO") == 0)
        return (INFO);
    else if (str.compare("WARNING") == 0)
        return (WARNING);
    else if (str.compare("ERROR") == 0)
        return (ERROR);
    else
        return (NOLEVEL);
}

int main(int ac, char **av)
{
    Harl        harl;
    std::string str;
    int         levelHarl;

    if (ac != 2)
    {
        std::cerr << "Merci de mettre un niveau en premier argument" << std::endl;
        return (1);
    }
    str = av[1];
    levelHarl = compareLevel(str);
    switch (levelHarl)
    {
        case (DEBUG):
            harl.complain("DEBUG");
        case (INFO):
            harl.complain("INFO");
        case (WARNING):
            harl.complain("WARNING");
        case (ERROR):
        {
            harl.complain("ERROR");
            break;
        }
        default:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
            
    }
    return (0);
}