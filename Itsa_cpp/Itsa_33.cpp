#include<iomanip>
#include<iostream>
#include<sstream>
#include<string>
int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        int size = 0;
        long long sum = 0;
        std::stringstream ss(line);
        long long number;
        while (ss >> number) {
            sum += number;
            size++;
        }
        if (size > 0) {
            std::cout << "Size: " << size << '\n';
            std::cout << "Average: " << std::fixed << std::setprecision(3) << (double)sum / size << '\n';
        }
    }
    return 0;
}
