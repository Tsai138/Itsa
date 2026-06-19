#include<array>
#include<iomanip>
#include<iostream>
std::array<int, 4> D = {120, 210, 170, 200};
std::array<double, 5> S = {2.10, 3.02, 4.39, 4.97, 5.63};
std::array<double, 5> W = {2.10, 2.68, 3.61, 4.01, 4.50};

int main() {
    int n;
    std::cin >> n;
    double SMoney = 0.0, WMoney = 0.0;
    for(int i = 0 ; i < 5 ; i++) {
        if(i < 4 && n >= D[i]) {
            n -= D[i];
            SMoney += D[i] * S[i];
            WMoney += D[i] * W[i];
        }else {
            SMoney += n * S[i];
            WMoney += n * W[i];
            break;
        }
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Summer months:" << SMoney << '\n';
    std::cout << "Non-Summer months:" << WMoney;
}
