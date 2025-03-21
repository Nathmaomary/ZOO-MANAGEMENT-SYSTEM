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
int main() {
    Zoo zoo;
    int choice;

    while (true) {
        std::cout << "1. Add Animal\n2. Display All Animals\n3. Exit\nChoose an option: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name, species;
            int age;
            std::cout << "Enter animal name: ";
            std::cin >> name;
            std::cout << "Enter animal species: ";
            std::cin >> species;
            std::cout << "Enter animal age: ";
            std::cin >> age;
            Animal animal(name, species, age);
            zoo.addAnimal(animal);
        } else if (choice == 2) {
            zoo.displayAllAnimals();
        } else {
            break;
        }
    }

    return 0;
}

class Employee {
private:
    std::string name;
    std::string role;
    double salary;

public:
    Employee(std::string name, std::string role, double salary)
        : name(name), role(role), salary(salary) {}

    void displayInfo() {
        std::cout << "Employee Name: " << name << "\nRole: " << role << "\nSalary: $" << salary << std::endl;
    }
};
class Zoo {
private:
    std::vector<Animal> animals;
    std::vector<Employee> employees;

public:
    void addAnimal(Animal newAnimal) {
        animals.push_back(newAnimal);
    }

    void addEmployee(Employee newEmployee) {
        employees.push_back(newEmployee);
    }

    void displayAllEmployees() {
        for (const auto& employee : employees) {
            employee.displayInfo();
            std::cout << "------------------\n";
        }
    }

    void displayAllAnimals() {
        for (const auto& animal : animals) {
            animal.displayInfo();
            std::cout << "------------------\n";
        }
    }
};









