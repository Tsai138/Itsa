#include<iomanip>
#include<iostream>
int main() {
    int H, n;
    while(std::cin >> H >> n) {
        std::cout << std::fixed << std::setprecision(1);
        if(n == 1) std::cout << (H - 80) * 0.7 << '\n';
        else std::cout << (H - 70) * 0.6 << '\n';
    }
    return 0;
}
