#include<stdio.h>
#include<stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    for(int i = 7 ; i >= 0 ; i--) {
        int n = (x >> i) & 1;
        printf("%d", n);
    }
    return 0;
}