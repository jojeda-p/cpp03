#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "--- 1. construction chain ---" << std::endl;
    ScavTrap a("Alice");
    ScavTrap b;

    std::cout << "--- 2. own ability ---" << std::endl;
    a.guardGate();

    std::cout << "--- 3. inherited functions ---" << std::endl;
    a.takeDamage(30);
    a.beRepaired(10);
    a.takeDamage(80);
    a.takeDamage(1);
    a.attack("Target");
    a.beRepaired(5);
    a.guardGate();

    std::cout << "--- 4. energy (50 points) ---" << std::endl;
    ScavTrap c("Carl");
    for (int i = 1; i <= 51; i++)
    {
        std::cout << "attempt " << i << ": ";
        c.attack("Target");
    }

    std::cout << "--- 5. copy and assignment ---" << std::endl;
    ScavTrap d("Dave");
    ScavTrap e(d);
    ScavTrap f("Frank");
    f = d;
    e.attack("Target");
    f.attack("Target");

    std::cout << "--- 6. ClapTrap vs ScavTrap ---" << std::endl;
    ClapTrap g("Gus");
    g.attack("Target");
    d.attack("Target");

    std::cout << "--- 7. pointer ---" << std::endl;
    ClapTrap *p = &d;
    p->attack("Target");

    std::cout << "--- 8. destruction order in a scope ---" << std::endl;
    {
        ScavTrap scoped("Scoped");
        std::cout << "inside the scope" << std::endl;
    }
    std::cout << "outside the scope" << std::endl;

    std::cout << "--- end of main ---" << std::endl;
    return 0;
}