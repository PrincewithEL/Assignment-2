#include <iostream>
#include <chrono>
#include <thread>

int main() {
    while (true) {
        std::cout << "Traffic Light Color: ";

        auto currentTime = std::chrono::system_clock::now();
        auto seconds = std::chrono::time_point_cast<std::chrono::seconds>(currentTime);

        switch (seconds.time_since_epoch().count() % 9) {
            case 0:
            case 1:
            case 2:
            case 3:
                std::cout << "Red" << std::endl;
                break;
            case 4:
                std::cout << "Yellow" << std::endl;
                break;
            case 5:
            case 6:
            case 7:
            case 8:
                std::cout << "Green" << std::endl;
                break;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
