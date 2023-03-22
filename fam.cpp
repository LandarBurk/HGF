#include <iostream>
#include <vector>
#include <string>

class Family {
public:
    std::string name;
    int age;
};

int main() {
    std::vector<Family> family;

    std::cout << "Please enter the names and ages of each family member:" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "Family member #" << i + 1 << ":" << std::endl;
        Family member;
        std::cout << "Name: ";
        std::getline(std::cin, member.name);
        std::cout << "Age: ";
        std::cin >> member.age;
        std::cin.ignore();
        family.push_back(member);
    }

    std::cout << std::endl << "The happy German family members are:" << std::endl;
    for (const auto& member : family) {
        std::cout << "Name: " << member.name << ", Age: " << member.age << std::endl;
    }

    return 0;
}
