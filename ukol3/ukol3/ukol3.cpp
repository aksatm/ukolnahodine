#include <iostream>
#include "Rodic.h"

int main()
{
    Rodic r("Petr", 45, 85);

    std::cout << "Jmeno: " << r.getName() << '\n';
    std::cout << "Vek: " << r.getAge() << " let\n";
    std::cout << "Vaha: " << r.getWeight() << " kg\n";

    r.speak();

    return 0;
}