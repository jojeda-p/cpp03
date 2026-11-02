#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("noname"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap default constructor called " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& str) : _name(str), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap named constructor called " << _name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _name(src._name), _HitPoints(src._HitPoints), _EnergyPoints(src._EnergyPoints), _AttackDamage(src._AttackDamage)
{
    std::cout << "ClapTrap copy constructor called " << _name << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap copy assignment operator called " << _name << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _HitPoints = rhs._HitPoints;
        _EnergyPoints = rhs._EnergyPoints;
        _AttackDamage = rhs._AttackDamage;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if(_EnergyPoints > 0 && _HitPoints > 0)
    {
        _EnergyPoints--;
        std::cout  << "ClapTrap " << _name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << _name << " can't attack";
        if (_EnergyPoints  == 0)
            std::cout << ", has no EnergyPoints";
        if (_HitPoints  == 0)
            std::cout << ", has no HitPoints";
        std::cout << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(_EnergyPoints > 0 && _HitPoints > 0)
    {
        _EnergyPoints--;
        _HitPoints += amount;
        std::cout  << "ClapTrap " << _name << " repaired " << amount << " HitPoints" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't be repaired";
        if (_EnergyPoints  == 0)
            std::cout << ", has no EnergyPoints";
        if (_HitPoints  == 0)
            std::cout << ", has no HitPoints";
        std::cout << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints == 0)
        std::cout  << "ClapTrap " << _name << " is already destroyed" << std::endl;
    else if (_HitPoints <= amount)
    {
        _HitPoints = 0;
        std::cout  << "ClapTrap " << _name << " received " << amount << " damage" << std::endl;
        std::cout  << "ClapTrap " << _name << " has been destroyed" << std::endl;
    }
    else
    {
        _HitPoints -= amount;
        std::cout  << "ClapTrap " << _name << " received " << amount << " damage" << std::endl;
    }
}