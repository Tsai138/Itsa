#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int x;
    scanf("%d", &x);
    int n = sqrt(x) + 1;
    for(int i = 2 ; i < n ; i++) {
        if(x % i == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}