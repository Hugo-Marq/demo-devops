#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream logfile("/app/logs/output.log", std::ios::app);

    if (!logfile.is_open()) {
        std::cerr << "Error: Could not open log file." << std::endl;
        return 1;
    }

    std::string message = "Hello from DevOps in C++!\n";
    std::cout << message;
    logfile << message;

    logfile.close();
    return 0;
}
