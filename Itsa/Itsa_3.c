#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    double dis = sqrt(x * x + y * y);
    if(dis <= 100)printf("inside");
    else printf("outside");
    return 0;
}