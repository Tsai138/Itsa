#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    for(int t = 0 ; t < n ; t++) {
        int limit, k, m;
        scanf("%d %d %d", &limit, &k, &m);
        int arr[m];
        for(int i = 0 ; i < m ; i++) {
            scanf("%d", &arr[i]);
        }
        qsort(arr, m, sizeof(int), cmp);
        int sum = 0;
        for(int  i = 0 ; i < k ; i++) {
            sum += arr[i];
        }
        if(sum <= limit)printf("%d\n", sum);
        else printf("Impossible\n");
    }
    return 0;
}