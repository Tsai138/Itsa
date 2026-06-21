#include<iostream>
#include<vector>
int per(int n, std::vector<int>& arr) {
    if(arr[n] != 0) return arr[n];
    int left = per(n - 1, arr);
    int right = per(n / 2, arr);
    arr[n] = left + right;
    return arr[n];
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n + 1);
    arr[0] = 1;
    arr[1] = 2; 
    int ans = per(n, arr);
    std::cout << ans;
    return 0;
}
