#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
    ScavTrap(void);
    ScavTrap(const std::string& str);
    ~ScavTrap(void);
    ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	void    attack(const std::string& target);
    void    guardGate();
};
#endif