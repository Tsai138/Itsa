#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n > 31)printf("Value of more than 31");
    else {
        printf("%d", 1 << n);
    }
    return 0;
}