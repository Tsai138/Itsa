#include<stdio.h>
#include<stdlib.h>
int main() {
    int money, a1, a2, a3;
    scanf("%d", &money);
    a3 = money / 10;
    money %= 10;
    a2 = money / 5;
    money %= 5;
    a1 = money / 1;
    money %= 1;
    printf("NT10=%d\nNT5=%d\nNT1=%d", a3, a2, a1);
    return 0;
}