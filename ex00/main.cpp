#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "--- 1. constructors ---" << std::endl;
    ClapTrap a("Alice");
    ClapTrap b;
    ClapTrap c(a);

    std::cout << "--- 2. asignation ---" << std::endl;
    b.attack("Target");
    b = a;
    b.attack("Target");

    std::cout << "--- 3. energy wasted ---" << std::endl;
    ClapTrap d("Dave");
    for (int i = 0; i < 11; i++)
    {
        std::cout << "attemp " << i + 1 << ": ";
        d.attack("Target");
    }
    d.beRepaired(5);

    std::cout << "--- 4. takeDamage: exact and already destroyed ---" << std::endl;
    ClapTrap e("Eve");
    e.takeDamage(4);
    e.takeDamage(6);
    e.takeDamage(1);
    e.attack("Target");
    e.beRepaired(5);

    std::cout << "--- 5. takeDamage: overdamage ---" << std::endl;
    ClapTrap f("Frank");
    f.takeDamage(1000);
    f.takeDamage(1);

    std::cout << "--- 6. repair and get damage ---" << std::endl;
    ClapTrap g("Gus");
    g.beRepaired(5);
    g.takeDamage(12);
    g.takeDamage(3);

    std::cout << "--- destructors ---" << std::endl;
    return 0;
}