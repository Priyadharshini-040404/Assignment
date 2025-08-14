#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string fileA = "A.csv";
    std::string fileB = "B.csv";

    // Check if A.csv exists
    if (!fs::exists(fileA)) {
        std::cerr << "Error: " << fileA << " does not exist.\n";
        return 1;
    }
    return 0;
}