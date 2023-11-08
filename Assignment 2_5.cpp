#include <iostream>
#include <cmath>

int main() {
    int choice;
    
    do {

        std::cout << "Menu:" << std::endl;
        std::cout << "1. Calculate the area of a circle" << std::endl;
        std::cout << "2. Calculate the area of a rectangle" << std::endl;
        std::cout << "3. Calculate the area of a triangle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case 1: 
                double radius, areaCircle;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                areaCircle = M_PI * radius * radius; 
                std::cout << "The area of the circle is: " << areaCircle << std::endl;
                break;
            
            case 2: 
                double length, width, areaRectangle;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                areaRectangle = length * width;
                std::cout << "The area of the rectangle is: " << areaRectangle << std::endl;
                break;
            
            case 3: 
                double base, height, areaTriangle;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                areaTriangle = 0.5 * base * height; 
                std::cout << "The area of the triangle is: " << areaTriangle << std::endl;
                break;
            
            case 4: 
                std::cout << "Thank you for visiting. Goodbye!" << std::endl;
                break;
            
            default:
                std::cout << "Invalid choice. Please select a valid option (1-4)." << std::endl;
        }
    } while (choice != 4); 

    return 0;
}
