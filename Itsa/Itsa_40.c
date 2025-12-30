#include<stdio.h>
#include<stdlib.h>
int main() {
    int arr[10];
    for(int i = 0 ; i < 10 ; i++) {
        char c;
        scanf("%c", &c);
        getchar();
        if(c == 'X')arr[i] = 10;
        else arr[i] = c - '0';
    }
    int sum[10];
    sum[0] = arr[0];
    for(int i = 1 ; i < 10 ; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
    int s = 0;
    for(int i = 0 ; i < 10 ; i++) {
        s += sum[i];
    }
    if(s % 11 == 0)printf("YES");
    else printf("NO");
    return 0;
}