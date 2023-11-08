#include <iostream>
#include <string>

int main() {
    std::string fullName;
    std::string course;
    int score;

    std::cout << "Enter full name of the student: ";
    std::getline(std::cin, fullName);
    std::cout << "Enter the course: ";
    std::getline(std::cin, course);
    std::cout << "Enter the score: ";
    std::cin >> score;

    char grade;

    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score < 40) {
        grade = 'F';
    } else {
        grade = 'Invalid Score'; 
    }

    std::cout << "Student: " << fullName << std::endl;
    std::cout << "Course: " << course << std::endl;
    std::cout << "Score: " << score << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
