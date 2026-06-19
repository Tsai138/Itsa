#include<iostream>
int main() {
    int n, a1, a2, a3;
    char comma;
    std::cin >> n >> comma >> a1 >> comma >> a2 >> comma >> a3;
    int money = n - 15 * a1 - 20 * a2 - 30 * a3;
    if(money < 0) {
        std::cout << 0;
        return 0;
    }else {
        a3 = money / 50;
        money %= 50;
        a2 = money / 5;
        money %= 5;
        a1 = money / 1;
        money %= 1;
    }
    std::cout << a1 << ',' << a2 << ',' << a3;
    return 0;
}
