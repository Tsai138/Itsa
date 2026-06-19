#include<iostream>
int main() {
    int n;
    std::cin >> n;
    if(n > 31) std::cout << "Value of more than 31";
    else {
        std::cout << (1 << n);
    }
    return 0;
}
