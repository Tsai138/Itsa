#include<iostream>
int main() {
    int n;
    std::cin >> n;
    for(int i = 0 ; i < n ; i++) {
        char ch;
        int a, b, c, d;
        std::cin >> ch >> a >> b >> c >> d;
        int A, B;
        if(ch == '-') {
            A = a - c;
            B = b - d;
        }else if(ch == '+') {
            A = a + c;
            B = b + d;
        }else {
            A = a * c - b * d;
            B = a * d + b * c;
        }
        std::cout << A << ' ' << B << '\n';
    }
    return 0;
}
