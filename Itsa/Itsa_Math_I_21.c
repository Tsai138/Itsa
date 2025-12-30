#include<stdio.h>
#include<stdlib.h>
long long Factorial(long long n) {
    if(n == 1)return 1;
    return n * Factorial(n -1);
}
int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld",Factorial(n));
}