#include <iostream>

int addNumbers(int first_params, int second_params){
    int result = first_params + second_params;
    return result;
}

int main(){ 
    int first_number {2};
    int second_number {4};

    std::cout<< "O primeiro número é :"<< first_number << std::endl;
    std::cout<< "O segundo número é :"<< second_number << std::endl;

    int sum = first_number + second_number;
    std::cout<< "O resultado é :"<< sum << std::endl;

    sum = addNumbers(30, 50);
    std::cout<< "O resultado é :"<< sum << std::endl;

    sum = addNumbers(100, 200);
    std::cout<< "O resultado é :"<< sum << std::endl;

    sum = addNumbers(500, 900);
    std::cout<< "O resultado é :"<< sum << std::endl;
}