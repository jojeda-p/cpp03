#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "--- 1. construction chain ---" << std::endl;
    FragTrap a("Alice");
    FragTrap b;

    std::cout << "--- 2. own ability ---" << std::endl;
    a.highFivesGuys();

    std::cout << "--- 3. attack (inherited from ClapTrap) ---" << std::endl;
    a.attack("Target");

    std::cout << "--- 4. inherited functions ---" << std::endl;
    a.takeDamage(30);
    a.beRepaired(10);
    a.takeDamage(80);
    a.takeDamage(1);
    a.attack("Target");
    a.beRepaired(5);

    std::cout << "--- 5. energy (100 points) ---" << std::endl;
    FragTrap c("Carl");
    for (int i = 1; i <= 101; i++)
    {
        std::cout << "attempt " << i << ": ";
        c.attack("Target");
    }

    std::cout << "--- 6. copy and assignment ---" << std::endl;
    FragTrap d("Dave");
    FragTrap e(d);
    FragTrap f("Frank");
    f = d;
    e.attack("Target");
    f.attack("Target");

    std::cout << "--- 7. the three classes together ---" << std::endl;
    ClapTrap g("Gus");
    ScavTrap h("Hank");
    FragTrap i("Ivy");
    g.attack("Target");
    h.attack("Target");
    i.attack("Target");

    std::cout << "--- 8. destruction order in a scope ---" << std::endl;
    {
        FragTrap scoped("Scoped");
        std::cout << "inside the scope" << std::endl;
    }
    std::cout << "outside the scope" << std::endl;

    std::cout << "--- end of main ---" << std::endl;
    return 0;
}