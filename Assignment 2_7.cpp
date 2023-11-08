#include <iostream>

int main() {
    int daysLate;
    char bookType;
    double fine = 0.0;

    std::cout << "Enter the number of days late: ";
    std::cin >> daysLate;
    std::cout << "Enter the type of book (R for regular, C for children's, or X for reference): ";
    std::cin >> bookType;

    if (daysLate <= 0) {
        fine = 0.0; 
    } else if (bookType == 'R' || bookType == 'r') {

        if (daysLate <= 7) {
            fine = 0.50 * daysLate;
        } else {
            fine = 0.50 * 7 + 1.00 * (daysLate - 7);
        }
    } else if (bookType == 'C' || bookType == 'c') {

        if (daysLate <= 7) {
            fine = 0.25 * daysLate;
        } else {
            fine = 0.25 * 7 + 0.50 * (daysLate - 7);
        }
    } else if (bookType == 'X' || bookType == 'x') {

        fine = 0.10 * daysLate;
    } else {
        std::cout << "Invalid book type. Please enter R, C, or X." << std::endl;
        return 1;
    }

    std::cout << "The late fee for the book is: " << fine << " kshs." << std::endl;

    return 0;
}
