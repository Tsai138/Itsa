#include<stdio.h>
#include<stdlib.h>
int per(int n, int* arr) {
    if(arr[n] != 0) return arr[n];
    int left = per(n - 1, arr);
    int right = per(n / 2, arr);
    arr[n] = left + right;
    return arr[n];
}
int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)calloc(n + 1, sizeof(int));
    arr[0] = 1;
    arr[1] = 2; 
    int ans = per(n, arr);
    printf("%d", ans);
    return 0;
}