#pragma once
#include "Rodic.h"

class Dite : public Rodic 
{
public:
    Dite(const std::string& name, int age, int weight, const std::string& vlasy);

    int getAge() const;
    int getWeight() const;

    const std::string& getVlasy() const;

    void speak() const override;

protected:
    std::string mVlasy;

};

