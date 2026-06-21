#include<algorithm>
#include<iostream>
int main() {
    int a, b, ans;
    std::cin >> a >> b;
    int big = std::max(a, b);
    int small = std::min(a, b);
    while(small != 0) {
        ans = small;
        small = big % ans;
        big = ans;
    }
    std::cout << ans;
    return 0;
}
