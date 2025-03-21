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

int main() {
    Zoo zoo;
    int choice;

    while (true) {
        std::cout << "1. Add Animal\n2. Display All Animals\n3. Add Employee\n4. Display All Employees\n5. Exit\nChoose an option: ";
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
        } else if (choice == 3) {
            std::string name, role;
            double salary;
            std::cout << "Enter employee name: ";
            std::cin >> name;
            std::cout << "Enter employee role: ";
            std::cin >> role;
            std::cout << "Enter employee salary: ";
            std::cin >> salary;
            Employee employee(name, role, salary);
            zoo.addEmployee(employee);
        } else if (choice == 4) {
            zoo.displayAllEmployees();
        } else {
            break;
        }
    }

    return 0;
}

class Exhibit {
private:
    std::string name;
    double size;
    std::vector<Animal> exhibitAnimals;

public:
    Exhibit(std::string name, double size)
        : name(name), size(size) {}

    void addAnimalToExhibit(Animal animal) {
        exhibitAnimals.push_back(animal);
    }

    void displayInfo() {
        std::cout << "Exhibit Name: " << name << "\nSize: " << size << " square meters\n";
        std::cout << "Animals in Exhibit:\n";
        for (const auto& animal : exhibitAnimals) {
            animal.displayInfo();
            std::cout << "------------------\n";
        }
    }
};
class Zoo {
private:
    std::vector<Animal> animals;
    std::vector<Employee> employees;
    std::vector<Exhibit> exhibits;

public:
    void addAnimal(Animal newAnimal) {
        animals.push_back(newAnimal);
    }

    void addEmployee(Employee newEmployee) {
        employees.push_back(newEmployee);
    }

    void addExhibit(Exhibit newExhibit) {
        exhibits.push_back(newExhibit);
    }

    void displayAllExhibits() {
        for (const auto& exhibit : exhibits) {
            exhibit.displayInfo();
            std::cout << "------------------\n";
        }
    }
};

int main() {
    Zoo zoo;
    int choice;

    while (true) {
        std::cout << "1. Add Animal\n2. Display All Animals\n3. Add Employee\n4. Display All Employees\n5. Add Exhibit\n6. Display All Exhibits\n7. Exit\nChoose an option: ";
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
        } else if (choice == 3) {
            std::string name, role;
            double salary;
            std::cout << "Enter employee name: ";
            std::cin >> name;
            std::cout << "Enter employee role: ";
            std::cin >> role;
            std::cout << "Enter employee salary: ";
            std::cin >> salary;
            Employee employee(name, role, salary);
            zoo.addEmployee(employee);
        } else if (choice == 4) {
            zoo.displayAllEmployees();
        } else if (choice == 5) {
            std::string name;
            double size;
            std::cout << "Enter exhibit name: ";
            std::cin >> name;
            std::cout << "Enter exhibit size: ";
            std::cin >> size;
            Exhibit exhibit(name, size);
            zoo.addExhibit(exhibit);
        } else if (choice == 6) {
            zoo.displayAllExhibits();
        } else {
            break;
        }
    }

    return 0;
}













