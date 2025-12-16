#include "dite.h"
#include <iostream>

Dite::Dite(const std::string& name, int age, int weight)
    : Rodic(name, age, weight)
{
    std::cout << "Dite constructor called for " << mName << '\n';
}

int Dite::getAge() const
{
    return mAge;
}

int Dite::getWeight() const
{
    return mWeight;
}

void Dite::speak() const
{
    std::cout << mName << " rika ahoooooooj.\n";
}

