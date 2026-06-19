#include<iomanip>
#include<iostream>
#include<limits>
int main() {
    double max = std::numeric_limits<double>::lowest();
    double min = std::numeric_limits<double>::max();
    for(int i = 0 ; i < 10 ; i++) {
        double x;
        std::cin >> x;
        max = x > max ? x : max;
        min = x > min ? min : x; 
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "maximum:" << max << "\nminimum:" << min;
    return 0;
}
