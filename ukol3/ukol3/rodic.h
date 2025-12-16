#pragma once
#include <string>

class Rodic
{
public:
    // Konstruktor zakladni tridy, ma stejny nazev jako trida
    Rodic(const std::string& name,
        int age,
        int weight);
    // Virtualni destruktor
    virtual ~Rodic();

    //dalsi metody
    const std::string& getName() const;
    int getAge() const;
    int getWeight() const;

    // Virtualni metoda
    virtual void speak() const;

protected:
    std::string mName;
    int mAge;
    int mWeight;
};

