#include "rodic.h"
#include <iostream>

Rodic::Rodic(const std::string& name, int age, int weight)
    : mName(name), mAge(age), mWeight(weight)
{
    std::cout << "Rodicovy constructor called for " << mName << '\n';
}

Rodic::~Rodic() = default;

const std::string& Rodic::getName() const
{
    return mName;
}

int Rodic::getAge() const
{
    return mAge;
}

int Rodic::getWeight() const
{
    return mWeight;
}

void Rodic::speak() const
{
    std::cout << getName() << " rika ahooooooj.\n";
}
