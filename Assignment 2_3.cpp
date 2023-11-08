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

    switch (score) {
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
            grade = 'A';
            break;

        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
            grade = 'B';
            break;

        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
            grade = 'C';
            break;

        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
            grade = 'D';
            break;

        default:
            if (score < 0 || score > 100) {
                grade = 'Invalid Score'; 
            } else {
                grade = 'F';
            }
    }

    std::cout << "Student: " << fullName << std::endl;
    std::cout << "Course: " << course << std::endl;
    std::cout << "Score: " << score << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
