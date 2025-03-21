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





