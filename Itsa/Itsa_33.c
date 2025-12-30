#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char S[10000];
    while (fgets(S, sizeof(S), stdin)) {
        int size = 0;
        long long sum = 0;
        char *s = strtok(S, " \t\r\n");
        while (s) {
            sum += atoll(s);
            size++;
            s = strtok(NULL, " \t\r\n");
        }
        if (size > 0) {
            printf("Size: %d\n", size);
            printf("Average: %.3f\n", (double)sum / size);
        }
    }
    return 0;
}