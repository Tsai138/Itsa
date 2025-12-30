#include<stdio.h>
#include<stdlib.h>

int main() {
    int x;
    scanf("%d", &x);
    if(x % 4 == 0) {
        if(x % 400 == 0){
            printf("Bissextile Year\n");
        }else if(x % 100 == 0){
            printf("Common Year\n");
        }else printf("Bissextile Year\n");
    }else printf("Common Year\n");
    return 0;
}