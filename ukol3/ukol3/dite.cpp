#include "dite.h"
#include <iostream>
#include <string>

Dite::Dite(const std::string& name, int age, int weight, const std::string& vlasy)
    : Rodic(name, age, weight), mVlasy(vlasy)
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

const std::string& Dite::getVlasy() const
{
    return mVlasy;
}

void Dite::speak() const
{
    std::cout << mName << " rika ahoooooooj.\n";
}

