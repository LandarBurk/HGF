#include <iostream>
#include <string>

class Family {
public:
    std::string name;
    int age;
};

int main() {
    const int family_size = 4;
    Family family[family_size];

    std::cout << "Please enter the names and ages of each family member:" << std::endl;
    for (int i = 0; i < family_size; i++) {
        std::cout << "Family member #" << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin, family[i].name);
        std::cout << "Age: ";
        std::cin >> family[i].age;
        std::cin.ignore();
    }

    std::cout << std::endl << "The happy German family members are:" << std::endl;
    for (int i = 0; i < family_size; i++) {
        std::cout << "Name: " << family[i].name << ", Age: " << family[i].age << std::endl;
    }

    return 0;
}
