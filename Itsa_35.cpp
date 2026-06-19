#include<algorithm>
#include<iostream>
#include<vector>
int main() {
    int n;
    std::cin >> n;
    for(int t = 0 ; t < n ; t++) {
        int limit, k, m;
        std::cin >> limit >> k >> m;
        std::vector<int> arr(m);
        for(int i = 0 ; i < m ; i++) {
            std::cin >> arr[i];
        }
        std::sort(arr.begin(), arr.end());
        int sum = 0;
        for(int  i = 0 ; i < k ; i++) {
            sum += arr[i];
        }
        if(sum <= limit) std::cout << sum << '\n';
        else std::cout << "Impossible\n";
    }
    return 0;
}
