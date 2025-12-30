#include<stdio.h>
#include<stdlib.h>
int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld+%lld=%lld\n", a, b, a + b);
    printf("%lld*%lld=%lld\n", a, b, a * b);
    printf("%lld-%lld=%lld\n", a, b, a - b);
    if(a % b < 0)printf("%lld/%lld=%lld...%lld\n", a, b, (a / b) - 1, (a % b + b) % b);
    else printf("%lld/%lld=%lld...%lld\n", a, b, a / b, (a % b + b) % b);
    return 0;
}