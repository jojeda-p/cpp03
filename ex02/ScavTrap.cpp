#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap default constructor called " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string& str) : ClapTrap(str)
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap named constructor called " << _name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if(_EnergyPoints > 0 && _HitPoints > 0)
    {
        _EnergyPoints--;
        std::cout  << "ScavTrap " << _name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " can't attack";
        if (_EnergyPoints  == 0)
            std::cout << ", has no EnergyPoints";
        if (_HitPoints  == 0)
            std::cout << ", has no HitPoints";
        std::cout << std::endl;
    }
}
