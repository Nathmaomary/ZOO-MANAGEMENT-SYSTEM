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

#include <iostream>
#include <limits>

int getValidIntInput() {
    int input;
    while (true) {
        std::cin >> input;
        if (std::cin.fail() || input <= 0) {
            std::cout << "Invalid input! Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return input;
        }
    }
}

double getValidDoubleInput() {
    double input;
    while (true) {
        std::cin >> input;
        if (std::cin.fail() || input <= 0.0) {
            std::cout << "Invalid input! Please enter a positive number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            return input;
        }
    }
}

void Zoo::removeAnimalByName(std::string name) {
    for (auto it = animals.begin(); it != animals.end(); ++it) {
        if (it->getName() == name) {
            animals.erase(it);
            std::cout << "Animal " << name << " removed from the zoo.\n";
            return;
        }
    }
    std::cout << "Animal " << name << " not found.\n";
}
if (choice == 7) {
    std::string name;
    std::cout << "Enter animal name to remove: ";
    std::cin >> name;
    zoo.removeAnimalByName(name);
}

#include <fstream>

void Zoo::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return;
    }

    file << "Animals:\n";
    for (const auto& animal : animals) {
        file << animal.getName() << ", " << animal.getSpecies() << ", " << animal.getAge() << "\n";
    }

    file << "Employees:\n";
    for (const auto& employee : employees) {
        file << employee.getName() << ", " << employee.getRole() << ", " << employee.getSalary() << "\n";
    }

    file << "Exhibits:\n";
    for (const auto& exhibit : exhibits) {
        file << exhibit.getName() << ", " << exhibit.getSize() << "\n";
    }

    file.close();
    std::cout << "Zoo data saved to " << filename << std::endl;
}

void Zoo::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line)) {
        if (line == "Animals:") {
            while (getline(file, line) && !line.empty()) {
                std::istringstream ss(line);
                std::string name, species;
                int age;
                std::getline(ss, name, ',');
                std::getline(ss, species, ',');
                ss >> age;
                animals.push_back(Animal(name, species, age));
            }
        } else if (line == "Employees:") {
            while (getline(file, line) && !line.empty()) {
                std::istringstream ss(line);
                std::string name, role;
                double salary;
                std::getline(ss, name, ',');
                std::getline(ss, role, ',');
                ss >> salary;
                employees.push_back(Employee(name, role, salary));
            }
        } else if (line == "Exhibits:") {
            while (getline(file, line) && !line.empty()) {
                std::istringstream ss(line);
                std::string name;
                double size;
                std::getline(ss, name, ',');
                ss >> size;
                exhibits.push_back(Exhibit(name, size));
            }
        }
    }

    file.close();
    std::cout << "Zoo data loaded from " << filename << std::endl;
}
if (choice == 8) {
    std::string filename;
    std::cout << "Enter filename to save zoo data: ";
    std::cin >> filename;
    zoo.saveToFile(filename);
} else if (choice == 9) {
    std::string filename;
    std::cout << "Enter filename to load zoo data: ";
    std::cin >> filename;
    zoo.loadFromFile(filename);
}

void Zoo::searchAnimalByName(std::string name) {
    bool found = false;
    for (const auto& animal : animals) {
        if (animal.getName() == name) {
            animal.displayInfo();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Animal " << name << " not found.\n";
    }
}
if (choice == 10) {
    std::string name;
    std::cout << "Enter animal name to search: ";
    std::cin >> name;
    zoo.searchAnimalByName(name);
}
void Zoo::displaySummary() {
    std::cout << "Zoo Summary:\n";
    std::cout << "Total Animals: " << animals.size() << "\n";
    std::cout << "Total Employees: " << employees.size() << "\n";
    std::cout << "Total Exhibits: " << exhibits.size() << "\n";

}
if (choice == 11) {
    zoo.displaySummary();
}

void Exhibit::addAnimalsToExhibit(std::vector<Animal> newAnimals) {
    exhibitAnimals.insert(exhibitAnimals.end(), newAnimals.begin(), newAnimals.end());
}
if (choice == 12) {
    std::string exhibitName;
    std::cout << "Enter exhibit name to add animals to: ";
    std::cin >> exhibitName;

    Exhibit* exhibit = nullptr;
    for (auto& ex : zoo.getExhibits()) {
        if (ex.getName() == exhibitName) {
            exhibit = &ex;
            break;
        }
    }

    if (exhibit) {
        int numAnimals;
        std::cout << "How many animals would you like to add to this exhibit? ";
        std::cin >> numAnimals;
        std::vector<Animal> animalsToAdd;
        for (int i = 0; i < numAnimals; ++i) {
            std::string name, species;
            int age;
            std::cout << "Enter animal name: ";
            std::cin >> name;
            std::cout << "Enter animal species: ";
            std::cin >> species;
            std::cout << "Enter animal age: ";
            std::cin >> age;
            animalsToAdd.push_back(Animal(name, species, age));
        }
        exhibit->addAnimalsToExhibit(animalsToAdd);
    } else {
        std::cout << "Exhibit not found!\n";
    }
}

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <limits>

// Animal Class
class Animal {
private:
    std::string name;
    std::string species;
    int age;

public:
    Animal(std::string name, std::string species, int age)
        : name(name), species(species), age(age) {}

    void displayInfo() const {
        std::cout << "Animal Name: " << name << "\nSpecies: " << species << "\nAge: " << age << std::endl;
    }

    std::string getName() const { return name; }
    void setName(const std::string& newName) { name = newName; }

    std::string getSpecies() const { return species; }
    void setSpecies(const std::string& newSpecies) { species = newSpecies; }

    int getAge() const { return age; }
    void setAge(int newAge) { age = newAge; }
};

// Employee Class
class Employee {
private:
    std::string name;
    std::string role;
    double salary;

public:
    Employee(std::string name, std::string role, double salary)
        : name(name), role(role), salary(salary) {}

    void displayInfo() const {
        std::cout << "Employee Name: " << name << "\nRole: " << role << "\nSalary: $" << salary << std::endl;
    }
};

// Exhibit Class
class Exhibit {
private:
    std::string name;
    double size;
    std::vector<Animal> exhibitAnimals;

public:
    Exhibit(std::string name, double size) : name(name), size(size) {}

    void addAnimalToExhibit(const Animal& animal) {
        exhibitAnimals.push_back(animal);
    }

    void displayInfo() const {
        std::cout << "Exhibit Name: " << name << "\nSize: " << size << " square meters\n";
        std::cout << "Animals in Exhibit:\n";
        for (const auto& animal : exhibitAnimals) {
            animal.displayInfo();
            std::cout << "------------------\n";
        }
    }
};

// Zoo Class
class Zoo {
private:
    std::vector<Animal> animals;
    std::vector<Employee> employees;
    std::vector<Exhibit> exhibits;

public:
    void addAnimal(const Animal& animal) {
        animals.push_back(animal);
    }

    void addEmployee(const Employee& employee) {
        employees.push_back(employee);
    }

    void addExhibit(const Exhibit& exhibit) {
        exhibits.push_back(exhibit);
    }

    void removeAnimalByName(const std::string& name) {
        auto it = std::remove_if(animals.begin(), animals.end(), 
            [&name](const Animal& animal) { return animal.getName() == name; });
        if (it != animals.end()) {
            animals.erase(it, animals.end());
            std::cout << "Animal " << name << " removed from the zoo.\n";
        } else {
            std::cout << "Animal " << name << " not found.\n";
        }
    }

    void displayAllAnimals() const {
        for (const auto& animal : animals) {
            animal.displayInfo();
            std::cout << "------------------\n";
        }
    }

    void displayAllEmployees() const {
        for (const auto& employee : employees) {
            employee.displayInfo();
            std::cout << "------------------\n";
        }
    }

    void displayAllExhibits() const {
        for (const auto& exhibit : exhibits) {
            exhibit.displayInfo();
            std::cout << "------------------\n";
        }
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Error opening file for writing!" << std::endl;
            return;
        }

        file << "Animals:\n";
        for (const auto& animal : animals) {
            file << animal.getName() << ", " << animal.getSpecies() << ", " << animal.getAge() << "\n";
        }

        file << "Employees:\n";
        for (const auto& employee : employees) {
            file << employee.getName() << ", " << employee.getRole() << ", " << employee.getSalary() << "\n";
        }

        file << "Exhibits:\n";
        for (const auto& exhibit : exhibits) {
            file << exhibit.getName() << ", " << exhibit.getSize() << "\n";
        }

        file.close();
       




























