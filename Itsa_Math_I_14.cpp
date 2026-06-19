#include<iostream>
int main() {
    int n;
    std::cin >> n;
    int days = n / (60 * 60 * 24);
    int hours = (n / (60 * 60)) % 24;
    int mins = (n / (60)) % 60;
    int secs = n % 60;
    std::cout << days << " days\n";
    std::cout << hours << " hours\n";
    std::cout << mins << " minutes\n";
    std::cout << secs << " seconds";
    return 0;
}
