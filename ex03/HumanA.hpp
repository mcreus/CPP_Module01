#ifndef HUMANA_HPP
# define HUMANB_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    public:

        HumanA();
        HumanA(std::string name, Weapon& _type);
        ~HumanA();
        void    attack();

    private:

        std::string _name;
        Weapon  _type;
};

#endif