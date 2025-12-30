#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main() {
    double max = FLT_MIN;
    double min = FLT_MAX;
    for(int i = 0 ; i < 10 ; i++) {
        double x;
        scanf("%lf", &x);
        max = x > max ? x : max;
        min = x > min ? min : x; 
    }
    printf("maximum:%.2lf\nminimum:%.2lf", max, min);
    return 0;
}