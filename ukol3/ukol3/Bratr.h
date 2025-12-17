#pragma once
#include "Rodic.h"

class Bratr : public Rodic
{
public:
    Bratr(const std::string& name, int age, int weight, const std::string& oci);

    int getAge() const;
    int getWeight() const;

    const std::string& getOci() const;

    void speak() const override;

protected:
    std::string mOci;

};

