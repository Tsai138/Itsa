#include<stdio.h>
#include<stdlib.h>
int main() {
    char s[105];
    int n;
    fgets(s , sizeof(s), stdin);
    scanf("%d", &n);
    for(int i = 0 ; s[i] != '\0' ; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = 'A' + (s[i] - 'A' + n) % 26;
        }else if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + (s[i] - 'a' + n) % 26;
        }else if(s[i] >= '0' && s[i] <= '9') {
            s[i] = '0' + (s[i] - '0' + n) % 10;
        }
    }
    printf("%s", s);
    return 0;
}