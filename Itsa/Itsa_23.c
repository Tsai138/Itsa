#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, a1, a2, a3;
    scanf("%d,%d,%d,%d", &n , &a1, &a2, &a3);
    int money = n - 15 * a1 - 20 * a2 - 30 * a3;
    if(money < 0) {
        printf("0");
        return 0;
    }else {
        a3 = money / 50;
        money %= 50;
        a2 = money / 5;
        money %= 5;
        a1 = money / 1;
        money %= 1;
    }
    printf("%d,%d,%d", a1, a2, a3);
    return 0;
}