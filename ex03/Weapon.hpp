#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Weapon
{
    public:

        Weapon();
        ~Weapon();
        std::string getType() const;
        void    setType(std::string type);

    private:

        std::string _type;

};

# endif