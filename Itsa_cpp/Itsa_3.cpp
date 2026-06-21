#include<cmath>
#include<iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    double dis = std::sqrt(x * x + y * y);
    if(dis <= 100) std::cout << "inside";
    else std::cout << "outside";
    return 0;
}
