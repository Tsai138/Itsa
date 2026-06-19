#include<iostream>
int Six_jdg(int a, int b, int c) {
    int s = 0;
    if(a >= 60)s++;
    if(b >= 60)s++;
    if(c >= 60)s++;
    return s;
}
int eight_jdg(int a, int b, int c) {
    int s = 0;
    if(a >= 80)s++;
    if(b >= 80)s++;
    if(c >= 80)s++;
    return s;
}
int twotwo_jdg(int a, int b, int c) {
    return a + b + c >= 220 ? 1 : 0;
}
int main() {
    int n;
    std::cin >> n;
    int a, b ,c;
    int six = 0, eight = 0, twotwo = 0;
    for(int i = 0 ; i < n ; i++) {
        std::cin >> a >> b >> c;
        six = Six_jdg(a, b, c);
        eight = eight_jdg(a, b ,c);
        twotwo = twotwo_jdg(a, b ,c);
        if(six == 3) {
            std::cout << "P\n";
        }else if(six == 2) {
            if(twotwo == 1) std::cout << "P\n";
            else std::cout << "M\n";
        }else if(eight == 1) {
            std::cout << "M\n";
        }else std::cout << "F\n";
    }
    return 0;
}
