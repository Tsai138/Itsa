#include<array>
#include<iostream>
#include<numeric>
int main() {
    std::array<int, 10> arr = {};
    for(int i = 0 ; i < 10 ; i++) {
        char c;
        std::cin >> c;
        if(c == 'X') arr[i] = 10;
        else arr[i] = c - '0';
    }
    std::array<int, 10> sum = {};
    sum[0] = arr[0];
    for(int i = 1 ; i < 10 ; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
    int s = std::accumulate(sum.begin(), sum.end(), 0);
    if(s % 11 == 0) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}
