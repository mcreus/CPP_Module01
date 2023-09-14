#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
    public:

        Weapon(std::string type);
        ~Weapon();
        std::string getType() const;
        void    setType(std::string type);

    private:

        Weapon();
        std::string _type;

};

# endif