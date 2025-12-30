#include<stdio.h>
#include<stdlib.h>
int main() {
    int P[6] = {0, 0, 0, 0, 0, 0};
    for(int  i = 0 ; i < 4 ; i++) {
        int x;
        scanf("%d", &x);
        P[x - 1]++;
    }
    for(int i = 0 ; i < 6 ; i++) {
        if(P[i] == 2) {
            int p = 0;
            for(int j = 0 ; j < 6 ; j++){
                if(P[j] != 0 && j != i) p += (j + 1) * P[j];
            }
            printf("%d", p);
            return 0;
        }
        if(P[i] == 4) {
            printf("WIN");
            return 0;
        }
    }
    printf("R");
    return 0;
}