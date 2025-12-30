#include<stdio.h>
#include<stdlib.h>
int D[4] = {120, 210, 170, 200};
double S[5] = {2.10, 3.02, 4.39, 4.97, 5.63};
double W[5] = {2.10, 2.68, 3.61, 4.01, 4.50};

int main() {
    int n;
    scanf("%d", &n);
    double SMoney = 0.0, WMoney = 0.0;
    for(int i = 0 ; i < 5 ; i++) {
        if(i < 4 && n >= D[i]) {
            n -= D[i];
            SMoney += D[i] * S[i];
            WMoney += D[i] * W[i];
        }else {
            SMoney += n * S[i];
            WMoney += n * W[i];
            break;
        }
    }
    printf("Summer months:%.2f\n", SMoney);
    printf("Non-Summer months:%.2f", WMoney);
}