#include<stdio.h>
#include<stdlib.h>
int main() {
    int H, n;
    while(scanf("%d %d", &H, &n) == 2) {
        if(n == 1)printf("%.1f\n", (H - 80) * 0.7);
        else printf("%.1f\n", (H - 70) * 0.6);
    }
    return 0;
}