#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b, ans;
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    while(min != 0) {
        ans = min;
        min = max % ans;
        max = ans;
    }
    printf("%d", ans);
    return 0;
}