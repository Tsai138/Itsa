#include<cmath>
#include<iostream>
int main() {
    int x;
    std::cin >> x;
    int n = std::sqrt(x) + 1;
    for(int i = 2 ; i < n ; i++) {
        if(x % i == 0){
            std::cout << "NO\n";
            return 0;
        }
    }
    std::cout << "YES\n";
    return 0;
}
