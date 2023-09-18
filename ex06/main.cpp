/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:51:27 by mcreus            #+#    #+#             */
/*   Updated: 2023/09/18 16:05:36 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl        harl;
    std::string str[4];
    int         levelHarl = 0;

    str[0] = "DEBUG";
    str[1] = "INFO";
    str[2] = "WARNING";
    str[3] = "ERROR";
    
    if (ac != 2)
    {
        std::cerr << "Merci de mettre un niveau en premier argument" << std::endl;
        return (1);
    }
    if (str[levelHarl].compare(av[1]) && levelHarl < 4)
        levelHarl++;
    switch (levelHarl)
    {
        case (0):
            harl.complain("DEBUG");
        case (1):
            harl.complain("INFO");
        case (2):
            harl.complain("WARNING");
        case (3):
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