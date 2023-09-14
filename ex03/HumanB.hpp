#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    public:

        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    attack();

    private:

        std::string _name;
        Weapon  _type;

};

#endif