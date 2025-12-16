#pragma once
#include "Rodic.h"

class Dite : public Rodic 
{
public:
    Dite(const std::string& name, int age, int weight);

    int getAge() const;
    int getWeight() const;

    void speak() const override;
};

