#include<iostream>
long long Factorial(long long n) {
    if(n == 1)return 1;
    return n * Factorial(n -1);
}
int main() {
    long long n;
    std::cin >> n;
    std::cout << Factorial(n);
}
