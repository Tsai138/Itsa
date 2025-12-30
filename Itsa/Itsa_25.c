#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    getchar();
    for(int t = 0 ; t < n ; t++) { 
        char s[35];
        fgets(s, sizeof(s), stdin);
        int sum = 0;
        for(int i = 0 ; s[i] != '\0' && s[i] != '\n' ; i++) {
            sum += s[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}