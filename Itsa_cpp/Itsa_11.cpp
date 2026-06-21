#include<iostream>
#include<vector>
int main() {
    int m, n;
    std::cin >> m >> n;
    std::vector<std::vector<int>> arr(n, std::vector<int>(m));
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            std::cin >> arr[j][i];
        }
    }
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(j) std::cout << ' ';
            std::cout << arr[i][j];
        }
        std::cout << '\n';
    }
    return 0;
}
