#include <iostream>
#include <string>

int main() {
    int age;
    char movieType;
    double ticketPrice = 0.0;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter the movie type (R for regular, 3D for 3D): ";
    std::cin >> movieType;

    if (age < 0) {
        std::cout << "Invalid age. Please enter a valid age." << std::endl;
        return 1;
    } else if (movieType == 'R' || movieType == 'r') {

        if (age < 13) {
            ticketPrice = 5.0; 
        } else if (age >= 13 && age < 65) {
            ticketPrice = 10.0; 
        } else {
            ticketPrice = 7.0; 
        }
    } else if (movieType == '3D' || movieType == '3d'){

        if (age < 13) {
            ticketPrice = 8.0; 
        } else if (age >= 13 && age < 65) {
            ticketPrice = 15.0; 
        } else {
            ticketPrice = 10.0; 
        }
    } else {
        std::cout << "Invalid movie type. Please enter R for regular or 3D for 3D." << std::endl;
        return 1;
    }

    std::cout << "Ticket price: " << ticketPrice << " .kshs" << std::endl;

    return 0;
}
