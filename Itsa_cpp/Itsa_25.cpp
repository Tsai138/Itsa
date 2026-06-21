#include<iostream>
#include<limits>
#include<string>
int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for(int t = 0 ; t < n ; t++) { 
        std::string s;
        std::getline(std::cin, s);
        int sum = 0;
        for(char ch : s) {
            sum += ch;
        }
        std::cout << sum << '\n';
    }
    return 0;
}
