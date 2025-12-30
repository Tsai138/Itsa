#include<stdio.h>
#include<stdlib.h>
int main() {
    int x;
    scanf("%d", &x);
    x = x / 3;
    x = (((x + 1) * x) / 2) * 3;
    printf("%d", x);
    return 0;
}