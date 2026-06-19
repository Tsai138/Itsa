#include<iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    if(a > 100 || b >100) std::cout << "outside";
    else std::cout << "inside";
    return 0;
}
