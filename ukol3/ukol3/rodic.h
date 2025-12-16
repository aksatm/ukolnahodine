#pragma once
#include <string>

class Rodic
{
public:
    // Konstruktor zakladni tridy, ma stejny nazev jako trida
    Rodic(const std::string& name,
        int age,
        int weight);
    // Virtualni destruktor pro spravne uvolneni pameti pri dedeni
    // destruktor ma stejny nazev jako trida, ale s tridou (~) pred ni
    virtual ~Rodic();

    //dalsi metody
    const std::string& getName() const;
    int getAge() const;
    int getWeight() const;

    // Virtualni metoda, aby odvozene tridy mohly popsat chovani
    virtual void speak() const;

protected:
    std::string mName;
    int mAge;
    int mWeight;
};

