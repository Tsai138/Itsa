#include<iostream>

int main() {
    int x;
    std::cin >> x;
    for(int i = 7 ; i >= 0 ; i--) {
        int n = (x >> i) & 1;
        std::cout << n;
    }
    return 0;
}
