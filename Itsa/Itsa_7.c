#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++) {
        char ch;
        int a, b, c, d;
        scanf(" %c %d %d %d %d", &ch, &a, &b, &c, &d);
        int A, B;
        if(ch == '-') {
            A = a - c;
            B = b - d;
        }else if(ch == '+') {
            A = a + c;
            B = b + d;
        }else {
            A = a * c - b * d;
            B = a * d + b * c;
        }
        printf("%d %d\n", A, B);
    }
    return 0;
}