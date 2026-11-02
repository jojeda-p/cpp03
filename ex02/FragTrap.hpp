#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
    FragTrap(void);
    FragTrap(const std::string& str);
    ~FragTrap(void);
    FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
    void    highFivesGuys(void);
};
#endif