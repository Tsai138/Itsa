#include<iostream>

int main() {
    int x;
    std::cin >> x;
    if(x % 4 == 0) {
        if(x % 400 == 0){
            std::cout << "Bissextile Year\n";
        }else if(x % 100 == 0){
            std::cout << "Common Year\n";
        }else std::cout << "Bissextile Year\n";
    }else std::cout << "Common Year\n";
    return 0;
}
