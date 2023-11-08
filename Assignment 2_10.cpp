#include <iostream>
#include <iomanip> 

int main() {
    double accountBalance = 1000.0; 
    double withdrawalAmount;
    double dailyLimit = 500.0;

    std::cout << "Welcome to your Bank ATM!" << std::endl;
    std::cout << "Your current account balance is: " << std::fixed << std::setprecision(2) << accountBalance << std::endl;
    std::cout << "Your daily withdrawal limit is: " << dailyLimit << std::endl;
    std::cout << "Enter the withdrawal amount: ";
    std::cin >> withdrawalAmount;

    if (withdrawalAmount <= 0) {
        std::cout << "Invalid withdrawal amount. Please enter a positive amount." << std::endl;
    } else if (withdrawalAmount > dailyLimit) {
        std::cout << "Withdrawal amount exceeds the daily limit of " << dailyLimit << " kshs." << ". Please enter a smaller amount." << std::endl;
    } else if (withdrawalAmount > accountBalance) {
        std::cout << "Insufficient funds. Your account balance is " << accountBalance  << " kshs." << ". Please enter a smaller amount." << std::endl;
    } else {

        accountBalance -= withdrawalAmount;
        std::cout << "Processing your withdrawal of $" << withdrawalAmount << "..." << std::endl;
        std::cout << "Withdrawal successful. Your new account balance is: " << std::fixed << std::setprecision(2) << accountBalance << " kshs." << std::endl;
        std::cout << "Please take your cash. Thank you for choosing your Bank!" << std::endl;
    }

    return 0;
}
