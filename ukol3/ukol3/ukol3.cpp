#include <iostream>
#include "Rodic.h"
#include "dite.h"
#include "Bratr.h"

int main()
{
    Rodic r("Petr", 45, 85);

    std::cout << "Jmeno: " << r.getName() << '\n';
    std::cout << "Vek: " << r.getAge() << " let\n";
    std::cout << "Vaha: " << r.getWeight() << " kg\n";

    r.speak();

    printf("\n");

    Dite* d = new Dite("Martin", 10, 30, "hneda");
    Rodic* p = d;
    std::cout << "Jmeno: " << p->getName() << '\n';
    std::cout << "Vek: " << p->getAge() << " let\n";
    std::cout << "Vaha: " << p->getWeight() << " kg\n";
    std::cout << "Barva vlasu je: " << d->getVlasy() << '\n';
    p->speak();

    delete p;

    Bratr* c = new Bratr("Jan", 22, 70, "modry");
    Rodic* p = d;
    std::cout << "Jmeno: " << p->getName() << '\n';
    std::cout << "Vek: " << p->getAge() << " let\n";
    std::cout << "Vaha: " << p->getWeight() << " kg\n";
    std::cout << "Barva oci je: " << c->getOci() << '\n';
    p->speak();

    delete p;

    return 0;
}