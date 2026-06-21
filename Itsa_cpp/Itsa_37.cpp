#include<array>
#include<iostream>
int main() {
    std::array<int, 6> P = {};
    for(int  i = 0 ; i < 4 ; i++) {
        int x;
        std::cin >> x;
        P[x - 1]++;
    }
    for(int i = 0 ; i < 6 ; i++) {
        if(P[i] == 2) {
            int p = 0;
            for(int j = 0 ; j < 6 ; j++){
                if(P[j] != 0 && j != i) p += (j + 1) * P[j];
            }
            std::cout << p;
            return 0;
        }
        if(P[i] == 4) {
            std::cout << "WIN";
            return 0;
        }
    }
    std::cout << "R";
    return 0;
}
