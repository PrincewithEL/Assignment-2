#include <iostream>

int main() {
    double num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int choice;

    switch (num1 > num2) {
        case true:
            std::cout << "The maximum number is: " << num1 << std::endl;
            break;
        case false:
            std::cout << "The maximum number is: " << num2 << std::endl;
            break;
    }

    return 0;
}
