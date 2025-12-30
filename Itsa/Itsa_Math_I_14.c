#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int days = n / (60 * 60 * 24);
    int hours = (n / (60 * 60)) % 24;
    int mins = (n / (60)) % 60;
    int secs = n % 60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds", days, hours, mins, secs);
    return 0;
}