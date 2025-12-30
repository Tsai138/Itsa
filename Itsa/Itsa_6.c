#include<stdio.h>
#include<stdlib.h>
int main() {
    int x;
    scanf("%d", &x);
    if(x >= 3 && x <= 5) {
        printf("Spring");
    }else if(x >= 6 && x <= 8) {
        printf("Summer");
    }else if(x >= 9 && x <= 11){
        printf("Autumn");
    }else printf("Winter");
    return 0;
}