#include <iomanip>
#include <iostream>

int main() {
    int mile;
    std::cin >> mile;
    std::cout << std::fixed << std::setprecision(1) << mile * 1.6;
	return 0;
}
