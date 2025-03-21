#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal {
public:
    string name;
    string species;
    int age;

    Animal(string n, string s, int a) : name(n), species(s), age(a) {}
    
    virtual void display() = 0;  // Pure virtual function
};

int main() {
    cout << "Zoo Management System" << endl;
    return 0;
}
