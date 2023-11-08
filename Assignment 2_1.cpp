#include <iostream>
#include <string>

int main() {
    std::string customerName;
    int age;
    double bankBalance;
    std::string crbStatus;
    int customerDurationMonths;
    
    std::cout << "Enter customer name: ";
    std::cin >> customerName;
    std::cout << "Enter customer age: ";
    std::cin >> age;
    std::cout << "Enter bank balance: ";
    std::cin >> bankBalance;
    std::cout << "Enter CRB status (good/bad): ";
    std::cin >> crbStatus;
    std::cout << "Enter customer duration (in months): ";
    std::cin >> customerDurationMonths;

    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerDurationMonths > 6) {
        std::cout << "Congratulations, " << customerName << "! You are qualified for a loan." << std::endl;
    } else {
        std::cout << "Sorry, " << customerName << ". You do not meet the loan qualification criteria." << std::endl;
    }

    return 0;
}
