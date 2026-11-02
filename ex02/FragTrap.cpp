#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap default constructor called " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& str) : ClapTrap(str)
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap named constructor called " << _name << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called " << _name << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap copy assignment operator called " << _name << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " asks for a high-five!" << std::endl;
}
