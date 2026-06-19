#include<iostream>
int main() {
    int money, a1, a2, a3;
    std::cin >> money;
    a3 = money / 10;
    money %= 10;
    a2 = money / 5;
    money %= 5;
    a1 = money / 1;
    money %= 1;
    std::cout << "NT10=" << a3 << "\nNT5=" << a2 << "\nNT1=" << a1;
    return 0;
}
