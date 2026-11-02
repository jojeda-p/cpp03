#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include<iostream>
#include<string>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int	_HitPoints;
        unsigned int	_EnergyPoints;
        unsigned int	_AttackDamage;
	public:
        ClapTrap(void);
		ClapTrap(const std::string& str);
		~ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
		void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
#endif