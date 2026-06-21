#include<algorithm>
#include<iostream>
#include<string>
int main() {
    int n;
    std::cin >> n;
    for(int t = 0 ; t < n ; t++) {
        std::string a, b;
        std::cin >> a >> b;
        int i = (int)a.size() - 1;
        int j = (int)b.size() - 1;
        std::string out;
        int carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int x = i >= 0 ? (a[i--] - '0') : 0;
            int y = j >= 0 ? (b[j--] - '0') : 0;
            int s = x + y + carry;
            out.push_back((char)('0' + (s % 10)));
            carry = s / 10;
        }
        std::reverse(out.begin(), out.end());
        std::cout << out << '\n';
    }
    return 0;
}
