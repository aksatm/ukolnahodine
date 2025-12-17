#include "Bratr.h"
#include <iostream>
#include <string>

Bratr::Bratr(const std::string& name, int age, int weight, const std::string& oci)
    : Rodic(name, age, weight), mOci(oci)
{
    std::cout << "Bratr constructor called for " << mName << '\n';
}

int Bratr::getAge() const
{
    return mAge;
}

int Bratr::getWeight() const
{
    return mWeight;
}

const std::string& Bratr::getOci() const
{
    return mOci;
}

void Bratr::speak() const
{
    std::cout << mName << " rika bla bla bla.\n";
}

