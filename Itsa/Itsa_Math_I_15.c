#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > 100 || b >100)printf("outside");
    else printf("inside");
    return 0;
}