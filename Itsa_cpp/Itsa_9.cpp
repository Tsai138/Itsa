#include<iostream>
int main() {
    int x;
    std::cin >> x;
    x = x / 3;
    x = (((x + 1) * x) / 2) * 3;
    std::cout << x;
    return 0;
}
