#include <iostream>

int main() {
    std::cout << "Welcome to Zoo Management System!" << std::endl;
    return 0;
}

class Animal {
private:
    std::string name;
    std::string species;
    int age;

public:
    Animal(std::string name, std::string species, int age) 
        : name(name), species(species), age(age) {}

    void displayInfo() {
        std::cout << "Animal Name: " << name << "\nSpecies: " << species << "\nAge: " << age << std::endl;
    }
};
void setName(std::string newName) {
    name = newName;
}

std::string getName() {
    return name;
}
#include <vector>
#include "Animal.h"

class Zoo {
private:
    std::vector<Animal> animals;

public:
    void addAnimal(Animal newAnimal) {
        animals.push_back(newAnimal);
    }

    void displayAllAnimals() {
        for (const auto& animal : animals) {
            animal.displayInfo();
            std::cout << "------------------\n";
        }
    }
};






