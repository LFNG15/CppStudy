#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;

    std::cout << "Your name and age" << std::endl;

    std::cin >> name;
    std::cin >> age;

    std::cin >> name >> age;

    std::cout <<"Hello," << name << "You are" << age << "years" << std::endl;

    return 0;
}