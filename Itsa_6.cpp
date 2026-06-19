#include<iostream>
int main() {
    int x;
    std::cin >> x;
    if(x >= 3 && x <= 5) {
        std::cout << "Spring";
    }else if(x >= 6 && x <= 8) {
        std::cout << "Summer";
    }else if(x >= 9 && x <= 11){
        std::cout << "Autumn";
    }else std::cout << "Winter";
    return 0;
}
