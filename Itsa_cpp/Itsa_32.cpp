#include<iostream>
#include<string>
int main() {
    std::string s;
    int n;
    std::getline(std::cin, s);
    std::cin >> n;
    for(char& ch : s) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + n) % 26;
        }else if(ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + n) % 26;
        }else if(ch >= '0' && ch <= '9') {
            ch = '0' + (ch - '0' + n) % 10;
        }
    }
    std::cout << s << '\n';
    return 0;
}
