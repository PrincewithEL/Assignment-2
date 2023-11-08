#include <iostream>

int main() {
    double purchaseAmount;
    double totalCost;

    std::cout << "Enter the purchase amount: ";
    std::cin >> purchaseAmount;

    if (purchaseAmount < 50.0) {
        totalCost = purchaseAmount; 
    } else if (purchaseAmount < 100.0) {
        totalCost = purchaseAmount * 0.9; 
    } else if (purchaseAmount < 200.0) {
        totalCost = purchaseAmount * 0.8; 
    } else {
        totalCost = purchaseAmount * 0.7; 
    }

    // Output the total cost after applying the discount
    std::cout << "Total cost after applying discount: " << totalCost << " kshs." << std::endl;

    return 0;
}
